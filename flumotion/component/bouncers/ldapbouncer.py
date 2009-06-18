'''
Created on Jun 16, 2009

@author: kristof
'''

import ldap
from twisted.python import components
from twisted.internet import defer

from flumotion.common import interfaces, keycards, log, error
from flumotion.component import component
from flumotion.component.bouncers import bouncer
from flumotion.twisted import credentials, checkers

__ALL__ = ['LdapBouncer']
__version__ = ""


class LdapBouncer(bouncer.ChallengeResponseBouncer):
  logCategory = 'ldapbouncer'
  #challenger type first, because it's more secure thus preferable
  keycardClasses = (keycards.KeycardUAPCC, keycards.KeycardUAPCC)
  challengeResponseClasses = (keycards.Keycards.KeycardUAPCC, )
  
  def do_setup(self):
    conf = self.config
    
    #we need a ldap server 
    ldap_server = None
    dn = None
    pw = None
    base_dn = None
    props = conf['properties']
    if 'ldap_server' in props:
      ldap_server = props['ldap_server']
      self.debug('using server %s for authentication', ldap_server)
    else:
      return defer.fail(errors.ConfigError(
          'Ldap Bouncer needs a <ldap_server> entry'))
    # FIXME: change messages for production 
    if 'dn' in props:
      dn = props['dn']
      self.debug('using server %s with %s', ldap_server, dn)
    else:
      return defer.fail(errors.configError(
              'Ldap bouncer needs dn data'))
    # FIXME: change messages and improve security for production
    if 'pw' in props:
      pw = props['pw']
      self.debug('using %s as pasword', pw)
    else:
      return defer.fail(errors.configError('Ldap bouncer needs password'))
    
    if 'base_dn' in props:
      base_dn = props['base_dn']
      self.debug('using %s as base_dn', base_dn)
    else:
      return defer.fail(errors.configError('Ldap bouncer needs base_dn'))
    
    return defer.succeed(None)
    
    
  def do_authenticate(self, keycard):
    keycard_data = keycard.getData()
    self.debug('authenticating keycard from %s', keycard_data["ip"])
    
    con = ldap.initialize(server)
    temp = con.simple_bind(dn, pw)
    temp = con.result(temp)
    if temp is None:
      self.debug('error at ldap initialize')
    else:
      uid = keycard['username']
      filter = "uid=" + uid
      sr = con.search(base_dn, ldap.SCOPE_SUBTREE, filter)
      if sr is  None:
        self.warning('user not found')
      else:
        sr_dn = sr[0][0][0]
        user_pw = keycard['password'] 
        br = con.simple_bind(filter,sr_dn,user_pw)
        if br is None:
          return None
        else:
          keycard.state = keycards.AUTHENTICATED
          self.addKeycard(keycard)
          return keycard
    
      