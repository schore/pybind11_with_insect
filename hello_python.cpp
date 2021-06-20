#include <pybind11/pybind11.h>
#include "hello.h"

int add(int a, int b) {return a+b;}


PYBIND11_MODULE(hello_python, m) {
  m.doc() = "Just a hello world exampe"; // optional module docstring
  m.def("hello", &hello, "Prints hello world");
  m.def("add", &add, "Add a and b");
}
