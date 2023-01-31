#include <pybind11/pybind11.h>  // 一定需要

#include "my_add.h"  // 需要bind哪些c++接口就include哪些

namespace py = pybind11;

// pybind11_math为python包名
// The second argument (m) defines a variable of type py::module_ which is the main interface for creating bindings.
// The method module_::def() generates binding code that exposes the add() function to Python.
PYBIND11_MODULE(pybind11_math, m) {  
  m.doc() = "pybind11 math function";

  // "add"为对外暴露的函数名
  // my_add为my_add.h中封装的C函数
  m.def("add", &my_add, "A function that adds two integer numbers");  
}
