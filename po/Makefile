# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file file be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.
#
# - Modified by Owen Taylor <otaylor@redhat.com> to use GETTEXT_PACKAGE
#   instead of PACKAGE and to look for po2tbl in ./ not in intl/
#
# - Modified by jacob berkman <jacob@ximian.com> to install
#   Makefile.in.in and po2tbl.sed.in for use with glib-gettextize
#
# - Modified by Rodney Dawes <dobey@novell.com> for use with intltool
#
# We have the following line for use by intltoolize:
# INTLTOOL_MAKEFILE

GETTEXT_PACKAGE = flumotion
PACKAGE = flumotion
VERSION = 0.5.4

SHELL = /bin/sh

srcdir = .
top_srcdir = ..
top_builddir = ..


prefix = /usr/local
exec_prefix = ${prefix}
datadir = ${datarootdir}
datarootdir = ${prefix}/share
libdir = ${exec_prefix}/lib
itlocaledir = $(prefix)/share/locale
subdir = po
install_sh = $(SHELL) /home/kristof/flumotion-0.5.4/install-sh
# Automake >= 1.8 provides /bin/mkdir -p.
# Until it can be supposed, use the safe fallback:
mkdir_p = $(install_sh) -d

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
INTLTOOL_UPDATE = $(top_builddir)/intltool-update
INTLTOOL_EXTRACT = $(top_builddir)/intltool-extract
MSGMERGE = INTLTOOL_EXTRACT=$(INTLTOOL_EXTRACT) srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --dist
GENPOT   = INTLTOOL_EXTRACT=$(INTLTOOL_EXTRACT) srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --pot

ALL_LINGUAS = @ALL_LINGUAS@

PO_LINGUAS=$(shell if test -r $(srcdir)/LINGUAS; then grep -v "^\#" $(srcdir)/LINGUAS; fi)

USER_LINGUAS=$(shell if test -n "$(LINGUAS)"; then LLINGUAS="$(LINGUAS)"; ALINGUAS="$(ALL_LINGUAS)"; for lang in $$LLINGUAS; do if test -n "`grep ^$$lang$$ $(srcdir)/LINGUAS`" -o -n "`echo $$ALINGUAS|grep ' ?$$lang ?'`"; then printf "$$lang "; fi; done; fi)

USE_LINGUAS=$(shell if test -n "$(USER_LINGUAS)"; then LLINGUAS="$(USER_LINGUAS)"; else if test -n "$(PO_LINGUAS)"; then LLINGUAS="$(PO_LINGUAS)"; else LLINGUAS="$(ALL_LINGUAS)"; fi; fi; for lang in $$LLINGUAS; do printf "$$lang "; done)

POFILES=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.po "; done)

DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(POFILES)
EXTRA_DISTFILES = POTFILES.skip Makevars LINGUAS

POTFILES = \
	../data/glade/admin.glade \
	../data/glade/admin-wizard.glade \
	../data/glade/audio-encoder-wizard.glade \
	../data/glade/authenticate.glade \
	../data/glade/connection-dialog.glade \
	../data/glade/connections.glade \
	../data/glade/consumption-wizard.glade \
	../data/glade/debug-marker.glade \
	../data/glade/disker-wizard.glade \
	../data/glade/encoding-wizard.glade \
	../data/glade/greeter-authenticate.glade \
	../data/glade/greeter-connect_to_existing.glade \
	../data/glade/greeter-initial.glade \
	../data/glade/greeter-load_connection.glade \
	../data/glade/greeter-start_new_error.glade \
	../data/glade/greeter-start_new.glade \
	../data/glade/greeter-start_new_success.glade \
	../data/glade/httpstreamer-wizard.glade \
	../data/glade/license-wizard.glade \
	../data/glade/ondemand-wizard.glade \
	../data/glade/open-connection.glade \
	../data/glade/overlay-wizard.glade \
	../data/glade/overview-wizard.glade \
	../data/glade/production-wizard.glade \
	../data/glade/sectionwizard.glade \
	../data/glade/scenario-wizard.glade \
	../data/glade/select-producers-wizard.glade \
	../data/glade/shout2-wizard.glade \
	../data/glade/summary-wizard.glade \
	../data/glade/videotest.glade \
	../data/glade/welcome-wizard.glade \
	../flumotion/admin/admin.py \
	../flumotion/admin/assistant/__init__.py \
	../flumotion/admin/assistant/models.py \
	../flumotion/admin/assistant/save.py \
	../flumotion/admin/command/__init__.py \
	../flumotion/admin/command/main.py \
	../flumotion/admin/command/utils.py \
	../flumotion/admin/config.py \
	../flumotion/admin/connections.py \
	../flumotion/admin/gtk/adminwindow.py \
	../flumotion/admin/gtk/basesteps.py \
	../flumotion/admin/gtk/componentlist.py \
	../flumotion/admin/gtk/componentview.py \
	../flumotion/admin/gtk/configurationassistant.py \
	../flumotion/admin/gtk/connections.py \
	../flumotion/admin/gtk/debugmarkerview.py \
	../flumotion/admin/gtk/dialogs.py \
	../flumotion/admin/gtk/greeter.py \
	../flumotion/admin/gtk/__init__.py \
	../flumotion/admin/gtk/main.py \
	../flumotion/admin/gtk/message.py \
	../flumotion/admin/gtk/overlaystep.py \
	../flumotion/admin/gtk/statusbar.py \
	../flumotion/admin/gtk/workerlist.py \
	../flumotion/admin/gtk/workerstep.py \
	../flumotion/admin/__init__.py \
	../flumotion/admin/multi.py \
	../flumotion/admin/rrdmon/config.py \
	../flumotion/admin/rrdmon/__init__.py \
	../flumotion/admin/rrdmon/main.py \
	../flumotion/admin/rrdmon/rrdmon.py \
	../flumotion/admin/text/admin_text.py \
	../flumotion/admin/text/connection.py \
	../flumotion/admin/text/greeter.py \
	../flumotion/admin/text/__init__.py \
	../flumotion/admin/text/main.py \
	../flumotion/admin/text/misc_curses.py \
	../flumotion/admin/text/view.py \
	../flumotion/common/avltree.py \
	../flumotion/common/boot.py \
	../flumotion/common/bundleclient.py \
	../flumotion/common/bundle.py \
	../flumotion/common/common.py \
	../flumotion/common/componentui.py \
	../flumotion/common/config.py \
	../flumotion/common/connection.py \
	../flumotion/common/dag.py \
	../flumotion/common/documentation.py \
	../flumotion/common/debug.py \
	../flumotion/common/enum.py \
	../flumotion/common/errors.py \
	../flumotion/common/format.py \
	../flumotion/common/fxml.py \
	../flumotion/common/gstreamer.py \
	../flumotion/common/identity.py \
	../flumotion/common/__init__.py \
	../flumotion/common/interfaces.py \
	../flumotion/common/keycards.py \
	../flumotion/common/log.py \
	../flumotion/common/managerspawner.py \
	../flumotion/common/manhole.py \
	../flumotion/common/medium.py \
	../flumotion/common/messages.py \
	../flumotion/common/netutils.py \
	../flumotion/common/options.py \
	../flumotion/common/package.py \
	../flumotion/common/planet.py \
	../flumotion/common/poller.py \
	../flumotion/common/pygobject.py \
	../flumotion/common/python.py \
	../flumotion/common/reflectcall.py \
	../flumotion/common/registry.py \
	../flumotion/common/reload.py \
	../flumotion/common/server.py \
	../flumotion/common/setup.py \
	../flumotion/common/signals.py \
	../flumotion/common/startset.py \
	../flumotion/common/testsuite.py \
	../flumotion/common/vfs.py \
	../flumotion/common/vfsgio.py \
	../flumotion/common/vfsgnome.py \
	../flumotion/common/watched.py \
	../flumotion/common/worker.py \
	../flumotion/component/base/admin_gtk.py \
	../flumotion/component/base/admin_text.py \
	../flumotion/component/base/baseadminnode.py \
	../flumotion/component/base/component.glade \
	../flumotion/component/base/componentnode.py \
	../flumotion/component/base/eaters.glade \
	../flumotion/component/base/eatersnode.py \
	../flumotion/component/base/effectsnode.py \
	../flumotion/component/base/feeders.glade \
	../flumotion/component/base/feedersnode.py \
	../flumotion/component/base/http.py \
	../flumotion/component/base/__init__.py \
	../flumotion/component/base/properties.glade \
	../flumotion/component/base/propertiesnode.py \
	../flumotion/component/base/scheduler.py \
	../flumotion/component/base/statewatcher.py \
	../flumotion/component/base/watcher.py \
	../flumotion/component/bouncers/admin_gtk.py \
	../flumotion/component/bouncers/bouncer.glade \
	../flumotion/component/bouncers/bouncer.py \
	../flumotion/component/bouncers/component.py \
	../flumotion/component/bouncers/htpasswdcrypt.py \
	../flumotion/component/bouncers/icalbouncer.py \
	../flumotion/component/bouncers/__init__.py \
	../flumotion/component/bouncers/ipbouncer.py \
	../flumotion/component/bouncers/plug.py \
	../flumotion/component/bouncers/saltsha256.py \
	../flumotion/component/bouncers/tokentestbouncer.py \
	../flumotion/component/bouncers/tokentest.py \
	../flumotion/component/combiners/composite/composite.py \
	../flumotion/component/combiners/composite/__init__.py \
	../flumotion/component/combiners/__init__.py \
	../flumotion/component/combiners/switch/admin_gtk.py \
	../flumotion/component/combiners/switch/basicwatchdog.py \
	../flumotion/component/combiners/switch/__init__.py \
	../flumotion/component/combiners/switch/patternswitch.py \
	../flumotion/component/combiners/switch/switch.py \
	../flumotion/component/component.py \
	../flumotion/component/consumers/disker/admin_gtk.py \
	../flumotion/component/consumers/disker/admin_text.py \
	../flumotion/component/consumers/disker/disker.glade \
	../flumotion/component/consumers/disker/disker_plug.py \
	../flumotion/component/consumers/disker/disker.py \
	../flumotion/component/consumers/disker/__init__.py \
	../flumotion/component/consumers/httpstreamer/admin_gtk.py \
	../flumotion/component/consumers/httpstreamer/httpstreamer.glade \
	../flumotion/component/consumers/httpstreamer/httpstreamer.py \
	../flumotion/component/consumers/httpstreamer/__init__.py \
	../flumotion/component/consumers/httpstreamer/resources.py \
	../flumotion/component/consumers/__init__.py \
	../flumotion/component/consumers/preview/__init__.py \
	../flumotion/component/consumers/preview/preview.py \
	../flumotion/component/consumers/shout2/__init__.py \
	../flumotion/component/consumers/shout2/shout2.py \
	../flumotion/component/converters/__init__.py \
	../flumotion/component/converters/overlay/genimg.py \
	../flumotion/component/converters/overlay/__init__.py \
	../flumotion/component/converters/overlay/overlay.py \
	../flumotion/component/converters/pipeline/__init__.py \
	../flumotion/component/converters/pipeline/pipeline.py \
	../flumotion/component/eater.py \
	../flumotion/component/effects/colorbalance/admin_gtk.py \
	../flumotion/component/effects/colorbalance/colorbalance.glade \
	../flumotion/component/effects/colorbalance/colorbalance.py \
	../flumotion/component/effects/colorbalance/__init__.py \
	../flumotion/component/effects/__init__.py \
	../flumotion/component/effects/volume/admin_gtk.py \
	../flumotion/component/effects/volume/__init__.py \
	../flumotion/component/effects/volume/volume.glade \
	../flumotion/component/effects/volume/volume.py \
	../flumotion/component/encoders/dirac/dirac.py \
	../flumotion/component/encoders/dirac/dirac.xml \
	../flumotion/component/encoders/dirac/__init__.py \
	../flumotion/component/encoders/dirac/wizard.glade \
	../flumotion/component/encoders/dirac/wizard_gtk.py \
	../flumotion/component/encoders/__init__.py \
	../flumotion/component/encoders/jpeg/__init__.py \
	../flumotion/component/encoders/jpeg/jpeg.py \
	../flumotion/component/encoders/jpeg/jpeg.xml \
	../flumotion/component/encoders/jpeg/wizard.glade \
	../flumotion/component/encoders/jpeg/wizard_gtk.py \
	../flumotion/component/encoders/mulaw/__init__.py \
	../flumotion/component/encoders/mulaw/mulaw.py \
	../flumotion/component/encoders/mulaw/mulaw.xml \
	../flumotion/component/encoders/mulaw/wizard.glade \
	../flumotion/component/encoders/mulaw/wizard_gtk.py \
	../flumotion/component/encoders/smoke/__init__.py \
	../flumotion/component/encoders/smoke/smoke.py \
	../flumotion/component/encoders/smoke/smoke.xml \
	../flumotion/component/encoders/smoke/wizard.glade \
	../flumotion/component/encoders/smoke/wizard_gtk.py \
	../flumotion/component/encoders/speex/__init__.py \
	../flumotion/component/encoders/speex/speex.py \
	../flumotion/component/encoders/speex/speex.xml \
	../flumotion/component/encoders/speex/wizard_gtk.py \
	../flumotion/component/encoders/theora/__init__.py \
	../flumotion/component/encoders/theora/theora.py \
	../flumotion/component/encoders/theora/theora.xml \
	../flumotion/component/encoders/theora/wizard.glade \
	../flumotion/component/encoders/theora/wizard_gtk.py \
	../flumotion/component/encoders/vorbis/__init__.py \
	../flumotion/component/encoders/vorbis/vorbis010.py \
	../flumotion/component/encoders/vorbis/vorbis.py \
	../flumotion/component/encoders/vorbis/vorbisutils.py \
	../flumotion/component/encoders/vorbis/vorbis.xml \
	../flumotion/component/encoders/vorbis/wizard.glade \
	../flumotion/component/encoders/vorbis/wizard_gtk.py \
	../flumotion/component/feedcomponent010.py \
	../flumotion/component/feedcomponent.py \
	../flumotion/component/feeder.py \
	../flumotion/component/feed.py \
	../flumotion/component/__init__.py \
	../flumotion/component/misc/httpserver/admin_gtk.py \
	../flumotion/component/misc/httpserver/httpfile.py \
	../flumotion/component/misc/httpserver/httpfile.glade \
	../flumotion/component/misc/httpserver/httpserver.glade \
	../flumotion/component/misc/httpserver/httpserver.py \
	../flumotion/component/misc/httpserver/__init__.py \
	../flumotion/component/misc/__init__.py \
	../flumotion/component/misc/porter/__init__.py \
	../flumotion/component/misc/porter/porterclient.py \
	../flumotion/component/misc/porter/porter.py \
	../flumotion/component/misc/repeater/__init__.py \
	../flumotion/component/misc/repeater/repeater.py \
	../flumotion/component/muxers/checks.py \
	../flumotion/component/muxers/__init__.py \
	../flumotion/component/muxers/multipart.py \
	../flumotion/component/muxers/muxers.xml \
	../flumotion/component/muxers/ogg.py \
	../flumotion/component/padmonitor.py \
	../flumotion/component/plugs/adminaction.py \
	../flumotion/component/plugs/base.py \
	../flumotion/component/plugs/cortado/cortado.xml \
	../flumotion/component/plugs/identity.py \
	../flumotion/component/plugs/__init__.py \
	../flumotion/component/plugs/request.py \
	../flumotion/component/plugs/manhole.py \
	../flumotion/component/plugs/streamdata.py \
	../flumotion/component/producers/audiotest/admin_gtk.py \
	../flumotion/component/producers/audiotest/audiotest.glade \
	../flumotion/component/producers/audiotest/audiotest.py \
	../flumotion/component/producers/audiotest/audiotest.xml \
	../flumotion/component/producers/audiotest/__init__.py \
	../flumotion/component/producers/audiotest/wizard.glade \
	../flumotion/component/producers/audiotest/wizard_gtk.py \
	../flumotion/component/producers/bttv/admin_gtk.py \
	../flumotion/component/producers/bttv/bttv.py \
	../flumotion/component/producers/bttv/bttv.xml \
	../flumotion/component/producers/bttv/colorbalance.glade \
	../flumotion/component/producers/bttv/__init__.py \
	../flumotion/component/producers/bttv/wizard.glade \
	../flumotion/component/producers/bttv/wizard_gtk.py \
	../flumotion/component/producers/checks.py \
	../flumotion/component/producers/firewire/admin_gtk.py \
	../flumotion/component/producers/firewire/firewire.py \
	../flumotion/component/producers/firewire/firewire.xml \
	../flumotion/component/producers/firewire/__init__.py \
	../flumotion/component/producers/firewire/wizard.glade \
	../flumotion/component/producers/firewire/wizard_gtk.py \
	../flumotion/component/producers/gdp/gdp.py \
	../flumotion/component/producers/gdp/__init__.py \
	../flumotion/component/producers/icecast/icecast.py \
	../flumotion/component/producers/icecast/__init__.py \
	../flumotion/component/producers/__init__.py \
	../flumotion/component/producers/ivtv/__init__.py \
	../flumotion/component/producers/ivtv/ivtv.py \
	../flumotion/component/producers/looper/admin_gtk.py \
	../flumotion/component/producers/looper/flufileinfo.glade \
	../flumotion/component/producers/looper/__init__.py \
	../flumotion/component/producers/looper/looper.glade \
	../flumotion/component/producers/looper/looper.py \
	../flumotion/component/producers/pipeline/__init__.py \
	../flumotion/component/producers/pipeline/pipeline.py \
	../flumotion/component/producers/playlist/__init__.py \
	../flumotion/component/producers/playlist/playlistparser.py \
	../flumotion/component/producers/playlist/playlist.py \
	../flumotion/component/producers/playlist/singledecodebin.py \
	../flumotion/component/producers/playlist/smartscale.py \
	../flumotion/component/producers/rtsp/__init__.py \
	../flumotion/component/producers/rtsp/rtsp.py \
	../flumotion/component/producers/screencast/__init__.py \
	../flumotion/component/producers/screencast/screencast.py \
	../flumotion/component/producers/soundcard/admin_gtk.py \
	../flumotion/component/producers/soundcard/__init__.py \
	../flumotion/component/producers/soundcard/soundcard.py \
	../flumotion/component/producers/soundcard/soundcard.xml \
	../flumotion/component/producers/soundcard/wizard.glade \
	../flumotion/component/producers/soundcard/wizard_gtk.py \
	../flumotion/component/producers/unixdomain/__init__.py \
	../flumotion/component/producers/unixdomain/unixdomain.py \
	../flumotion/component/producers/videotest/admin_gtk.py \
	../flumotion/component/producers/videotest/admin_text.py \
	../flumotion/component/producers/videotest/__init__.py \
	../flumotion/component/producers/videotest/videotest.py \
	../flumotion/component/producers/videotest/videotest.xml \
	../flumotion/component/producers/videotest/wizard.glade \
	../flumotion/component/producers/videotest/wizard_gtk.py \
	../flumotion/component/producers/webcam/admin_gtk.py \
	../flumotion/component/producers/webcam/__init__.py \
	../flumotion/component/producers/webcam/webcam.py \
	../flumotion/component/producers/webcam/webcam.xml \
	../flumotion/component/producers/webcam/wizard.glade \
	../flumotion/component/producers/webcam/wizard.glade \
	../flumotion/component/producers/webcam/wizard_gtk.py \
	../flumotion/configure/configure.py \
	../flumotion/configure/__init__.py \
	../flumotion/configure/installed.py \
	../flumotion/configure/uninstalled.py \
	../flumotion/extern/code.py \
	../flumotion/extern/exceptiondialog.py \
	../flumotion/extern/fdpass/__init__.py \
	../flumotion/extern/__init__.py \
	../flumotion/extern/pytrayicon/eggtrayicon.c \
	../flumotion/extern/pytrayicon/__init__.py \
	../flumotion/extern/pytrayicon/ltihooks.py \
	../flumotion/__init__.py \
	../flumotion/job/__init__.py \
	../flumotion/job/job.py \
	../flumotion/job/main.py \
	../flumotion/launch/__init__.py \
	../flumotion/launch/inspect.py \
	../flumotion/launch/main.py \
	../flumotion/launch/parse.py \
	../flumotion/manager/admin.py \
	../flumotion/manager/base.py \
	../flumotion/manager/component.py \
	../flumotion/manager/config.py \
	../flumotion/manager/__init__.py \
	../flumotion/manager/main.py \
	../flumotion/manager/manager.py \
	../flumotion/manager/worker.py \
	../flumotion/monitor/__init__.py \
	../flumotion/monitor/nagios/__init__.py \
	../flumotion/monitor/nagios/main.py \
	../flumotion/monitor/nagios/util.py \
	../flumotion/project/__init__.py \
	../flumotion/project/project.py \
	../flumotion/scenario/__init__.py \
	../flumotion/scenario/steps/steps.xml \
	../flumotion/scenario/steps/__init__.py \
	../flumotion/scenario/steps/licensestep.py \
	../flumotion/scenario/steps/shout2steps.py \
	../flumotion/scenario/steps/summarysteps.py \
	../flumotion/scenario/steps/httpstreamersteps.py \
	../flumotion/scenario/steps/ondemandstep.py \
	../flumotion/scenario/steps/productionsteps.py \
	../flumotion/scenario/steps/consumptionsteps.py \
	../flumotion/scenario/steps/diskersteps.py \
	../flumotion/scenario/steps/conversionsteps.py \
	../flumotion/scenario/ondemand/ondemand.xml \
	../flumotion/scenario/ondemand/__init__.py \
	../flumotion/scenario/ondemand/wizard_gtk.py \
	../flumotion/scenario/live/live.xml \
	../flumotion/scenario/live/__init__.py \
	../flumotion/scenario/live/wizard_gtk.py \
	../flumotion/service/__init__.py \
	../flumotion/service/main.py \
	../flumotion/service/service.py \
	../flumotion/test/bouncertest.py \
	../flumotion/test/comptest.py \
	../flumotion/tester/clientfactory.py \
	../flumotion/tester/client.py \
	../flumotion/tester/httpclient.py \
	../flumotion/tester/__init__.py \
	../flumotion/test/gtkunit.py \
	../flumotion/test/__init__.py \
	../flumotion/test/realm.py \
	../flumotion/test/test_admin_admin.py \
	../flumotion/test/test_admin_config.py \
	../flumotion/test/test_admin_multi.py \
	../flumotion/test/test_checkers.py \
	../flumotion/test/test_common_avltree.py \
	../flumotion/test/test_common_bundle.py \
	../flumotion/test/test_common_componentui.py \
	../flumotion/test/test_common_connection.py \
	../flumotion/test/test_common_gstreamer.py \
	../flumotion/test/test_common_messages.py \
	../flumotion/test/test_common_netutils.py \
	../flumotion/test/test_common_package.py \
	../flumotion/test/test_common_planet.py \
	../flumotion/test/test_common.py \
	../flumotion/test/test_common_pygobject.py \
	../flumotion/test/test_common_signals.py \
	../flumotion/test/test_component_base_scheduler.py \
	../flumotion/test/test_component_base_watcher.py \
	../flumotion/test/test_component_bouncers_bouncer.py \
	../flumotion/test/test_component_bouncers_component.py \
	../flumotion/test/test_component_bouncers_plug.py \
	../flumotion/test/test_component_feeder.py \
	../flumotion/test/test_component_feed.py \
	../flumotion/test/test_component_httpserver.py \
	../flumotion/test/test_component_httpstreamer.py \
	../flumotion/test/test_component_init.py \
	../flumotion/test/test_component_padmonitor.py \
	../flumotion/test/test_component_playlist.py \
	../flumotion/test/test_component.py \
	../flumotion/test/test_comptest.py \
	../flumotion/test/test_config.py \
	../flumotion/test/test_configure.py \
	../flumotion/test/test_credentials.py \
	../flumotion/test/test_dag.py \
	../flumotion/test/test_defer.py \
	../flumotion/test/test_dialogs.py \
	../flumotion/test/test_enum.py \
	../flumotion/test/test_flavors.py \
	../flumotion/test/test_greeter.py \
	../flumotion/test/test_htpasswdcrypt.py \
	../flumotion/test/test_http.py \
	../flumotion/test/test_i18n.py \
	../flumotion/test/test_keycards.py \
	../flumotion/test/test_logfilter.py \
	../flumotion/test/test_manager_admin.py \
	../flumotion/test/test_manager_manager.py \
	../flumotion/test/test_manager_worker.py \
	../flumotion/test/test_options.py \
	../flumotion/test/test_parts.py \
	../flumotion/test/test_pb.py \
	../flumotion/test/test_pbstream.py \
	../flumotion/test/test_porter.py \
	../flumotion/test/test_public_ui_api.py \
	../flumotion/test/test_reflect.py \
	../flumotion/test/test_registry.py \
	../flumotion/test/test_saltsha256.py \
	../flumotion/test/test_testclasses.py \
	../flumotion/test/test_twisted_integration.py \
	../flumotion/test/test_ui_fgtk.py \
	../flumotion/test/test_wizard_models.py \
	../flumotion/test/test_wizard.py \
	../flumotion/test/test_worker_config.py \
	../flumotion/test/test_workerconfig.py \
	../flumotion/test/test_worker_job.py \
	../flumotion/test/test_worker_medium.py \
	../flumotion/test/test_worker_worker.py \
	../flumotion/twisted/checkers.py \
	../flumotion/twisted/compat.py \
	../flumotion/twisted/credentials.py \
	../flumotion/twisted/defer.py \
	../flumotion/twisted/fdserver.py \
	../flumotion/twisted/flavors.py \
	../flumotion/twisted/__init__.py \
	../flumotion/twisted/integration.py \
	../flumotion/twisted/pb.py \
	../flumotion/twisted/portal.py \
	../flumotion/twisted/reflect.py \
	../flumotion/twisted/rtsp.py \
	../flumotion/ui/fgtk.py \
	../flumotion/ui/fileselector.py \
	../flumotion/ui/glade.py \
	../flumotion/ui/icons.py \
	../flumotion/ui/__init__.py \
	../flumotion/ui/kiwipatches.py \
	../flumotion/ui/simplewizard.py \
	../flumotion/ui/trayicon.py \
	../flumotion/ui/wizard.py \
	../flumotion/worker/base.py \
	../flumotion/worker/checks/audio.py \
	../flumotion/worker/checks/check.py \
	../flumotion/worker/checks/encoder.py \
	../flumotion/worker/checks/gst010.py \
	../flumotion/worker/checks/__init__.py \
	../flumotion/worker/checks/video.py \
	../flumotion/worker/config.py \
	../flumotion/worker/feedserver.py \
	../flumotion/worker/__init__.py \
	../flumotion/worker/job.py \
	../flumotion/worker/main.py \
	../flumotion/worker/medium.py \
	../flumotion/worker/worker.py
# This comment gets stripped out

CATALOGS=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.gmo "; done)

.SUFFIXES:
.SUFFIXES: .po .pox .gmo .mo .msg .cat

.po.pox:
	$(MAKE) $(GETTEXT_PACKAGE).pot
	$(MSGMERGE) $< $(GETTEXT_PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && gencat $@ $*.msg


all: all-yes

all-yes: $(CATALOGS)
all-no:

$(GETTEXT_PACKAGE).pot: $(POTFILES)
	$(GENPOT)

install: install-data
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	$(mkdir_p) $(DESTDIR)$(itlocaledir)
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  dir=$(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $$dir; \
	  if test -r $$lang.gmo; then \
	    $(INSTALL_DATA) $$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $$lang.gmo as $$dir/$(GETTEXT_PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $(srcdir)/$$lang.gmo as" \
		 "$$dir/$(GETTEXT_PACKAGE).mo"; \
	  fi; \
	  if test -r $$lang.gmo.m; then \
	    $(INSTALL_DATA) $$lang.gmo.m $$dir/$(GETTEXT_PACKAGE).mo.m; \
	    echo "installing $$lang.gmo.m as $$dir/$(GETTEXT_PACKAGE).mo.m"; \
	  else \
	    if test -r $(srcdir)/$$lang.gmo.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$lang.gmo.m \
		$$dir/$(GETTEXT_PACKAGE).mo.m; \
	      echo "installing $(srcdir)/$$lang.gmo.m as" \
		   "$$dir/$(GETTEXT_PACKAGE).mo.m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done

# Empty stubs to satisfy archaic automake needs
dvi info tags TAGS ID:

# Define this as empty until I found a useful application.
install-exec installcheck:

uninstall:
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo; \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo.m; \
	done

check: all

check-DISABLED: all $(GETTEXT_PACKAGE).pot
	rm -fr missing notexist
	srcdir=$(srcdir) $(INTLTOOL_UPDATE) -m
	if [ -r missing -o -r notexist ]; then \
	  exit 1; \
	fi

mostlyclean:
	rm -f *.pox $(GETTEXT_PACKAGE).pot *.old.po cat-id-tbl.tmp
	rm -f .intltool-merge-cache

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES stamp-it
	rm -f *.mo *.msg *.cat *.cat.m *.gmo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f Makefile.in.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: $(DISTFILES)
	dists="$(DISTFILES)"; \
	extra_dists="$(EXTRA_DISTFILES)"; \
	for file in $$extra_dists; do \
	  test -f $(srcdir)/$$file && dists="$$dists $(srcdir)/$$file"; \
	done; \
	for file in $$dists; do \
	  test -f $$file || file="$(srcdir)/$$file"; \
	  ln $$file $(distdir) 2> /dev/null \
	    || cp -p $$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(GETTEXT_PACKAGE).pot
	tmpdir=`pwd`; \
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  echo "$$lang:"; \
	  result="`$(MSGMERGE) -o $$tmpdir/$$lang.new.po $$lang`"; \
	  if $$result; then \
	    if cmp $(srcdir)/$$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	      rm -f $$tmpdir/$$lang.new.po; \
            else \
	      if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	        :; \
	      else \
	        echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	        rm -f $$tmpdir/$$lang.new.po; \
	        exit 1; \
	      fi; \
	    fi; \
	  else \
	    echo "msgmerge for $$lang.gmo failed!"; \
	    rm -f $$tmpdir/$$lang.new.po; \
	  fi; \
	done

Makefile POTFILES: stamp-it
	@if test ! -f $@; then \
	  rm -f stamp-it; \
	  $(MAKE) stamp-it; \
	fi

stamp-it: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/Makefile.in CONFIG_HEADERS= CONFIG_LINKS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
