#include <Python.h>
#include <stdio.h>

// method definition
static PyObject* display_display(PyObject *self, PyObject *args) {
	const char* toBePrinted;

	// convert python input type to c type
	if(!PyArg_ParseTuple(args, "s", &toBePrinted))
		return NULL;
	printf(toBePrinted + "\n");
	Py_RETURN_NONE;
}

// method table
static PyMethodDef displayMethods[] = {
		{
				"display",
				display_display,
				METH_VARARGS,
				"prints the input text on console"
		},
		{
				NULL, NULL, 0, NULL
		}
};

// module definition
static struct PyModuleDef displayModule = {
		PyModuleDef_HEAD_INIT,
		"display",
		"includes nethod that prints",
		-1,
		displayMethods
};

// Init
PyMODINIT_FUNC PyInit_display(void) {
	Py_Initialize();
	return PyModule_Create(&displayModule);
}
