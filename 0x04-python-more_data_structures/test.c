#include <stdio.h>
#include <Python.h>

void print_python_list(PyObject *p) {
    PyListObject *list;
    Py_ssize_t size, i;

    if (!PyList_Check(p)) {
        printf("[ERROR] Invalid Python List Object\n");
        return;
    }

    list = (PyListObject *)p;
    size = PyList_Size(p);

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", list->allocated);

    if (size > 0)
        printf("Element 0: %s\n", Py_TYPE(list->ob_item[0])->tp_name);
}

void print_python_bytes(PyObject *p) {
    PyBytesObject *bytes;
    Py_ssize_t size, i;
    char *byte_str;

    if (!PyBytes_Check(p)) {
        printf("[ERROR] Invalid Python Bytes Object\n");
        return;
    }

    bytes = (PyBytesObject *)p;
    size = PyBytes_Size(p);
    byte_str = PyBytes_AsString(p);

    printf("[.] bytes object info\n");
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", byte_str);

    printf("  first %ld bytes:", (size > 10) ? 10 : size);

    for (i = 0; i < ((size > 10) ? 10 : size); i++) {
        printf(" %02x", byte_str[i] & 0xff);
    }

    printf("\n");
}
