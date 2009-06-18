/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 3 "pytrayicon.override"
#include <Python.h>
#include "pygobject.h"
#include "eggtrayicon.h"
#line 12 "pytrayicon.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGtkPlug_Type;
#define PyGtkPlug_Type (*_PyGtkPlug_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyEggTrayIcon_Type;

#line 23 "pytrayicon.c"



/* ----------- EggTrayIcon ----------- */

static int
_wrap_egg_tray_icon_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:EggTrayIcon.__init__", kwlist, &name))
        return -1;
    self->obj = (GObject *)egg_tray_icon_new(name);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create EggTrayIcon object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

#line 12 "pytrayicon.override"
static PyObject*
_wrap_egg_tray_icon_send_message(PyGObject *self,
                                 PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = {"timeout", "message", NULL};
    int timeout, len, ret;
    char *message;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "is#:TrayIcon.send_message", kwlist,
                                     &timeout, &message, &len))
        return NULL;
    ret = egg_tray_icon_send_message(EGG_TRAY_ICON(self->obj),
                                     timeout, message, len);
    return PyInt_FromLong(ret);
}
#line 64 "pytrayicon.c"


static PyObject *
_wrap_egg_tray_icon_cancel_message(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    PyObject *py_id = NULL;
    guint id = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:EggTrayIcon.cancel_message", kwlist, &py_id))
        return NULL;
    if (py_id) {
        if (PyLong_Check(py_id))
            id = PyLong_AsUnsignedLong(py_id);
        else if (PyInt_Check(py_id))
            id = PyInt_AsLong(py_id);
        else
            PyErr_SetString(PyExc_TypeError, "Parameter 'id' must be an int or a long");
        if (PyErr_Occurred())
            return NULL;
    }
    
    egg_tray_icon_cancel_message(EGG_TRAY_ICON(self->obj), id);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_egg_tray_icon_get_orientation(PyGObject *self)
{
    gint ret;

    
    ret = egg_tray_icon_get_orientation(EGG_TRAY_ICON(self->obj));
    
    return pyg_enum_from_gtype(GTK_TYPE_ORIENTATION, ret);
}

static PyObject *
_wrap_egg_tray_icon_set_tooltip(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "tooltip", NULL };
    char *tooltip;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:EggTrayIcon.set_tooltip", kwlist, &tooltip))
        return NULL;
    
    egg_tray_icon_set_tooltip(EGG_TRAY_ICON(self->obj), tooltip);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyEggTrayIcon_methods[] = {
    { "send_message", (PyCFunction)_wrap_egg_tray_icon_send_message, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "cancel_message", (PyCFunction)_wrap_egg_tray_icon_cancel_message, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_orientation", (PyCFunction)_wrap_egg_tray_icon_get_orientation, METH_NOARGS,
      NULL },
    { "set_tooltip", (PyCFunction)_wrap_egg_tray_icon_set_tooltip, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyEggTrayIcon_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "pytrayicon.TrayIcon",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyEggTrayIcon_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_egg_tray_icon_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_egg_tray_icon_get_type(PyObject *self)
{
    GType ret;

    
    ret = egg_tray_icon_get_type();
    
    return pyg_type_wrapper_new(ret);
}

const PyMethodDef pytrayicon_functions[] = {
    { "egg_tray_icon_get_type", (PyCFunction)_wrap_egg_tray_icon_get_type, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

/* initialise stuff extension classes */
void
pytrayicon_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkPlug_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Plug");
        if (_PyGtkPlug_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Plug from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 217 "pytrayicon.c"
    pygobject_register_class(d, "EggTrayIcon", EGG_TYPE_TRAY_ICON, &PyEggTrayIcon_Type, Py_BuildValue("(O)", &PyGtkPlug_Type));
}
