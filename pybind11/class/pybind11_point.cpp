#include <pybind11/pybind11.h>

#include "my_point.h"

namespace py = pybind11;

PYBIND11_MODULE(pybind11_point, m) {

  //   struct Vector3d {
  //     double x;
  //     double y;
  //     double z;
  //   };
  py::class_<Vector3d>(m, "Vector3d")
      .def(py::init<>()) // C++会默认生成构造函数等，但是这里要显式的声明
      .def_readwrite("x", &Vector3d::x)
      .def_readwrite("y", &Vector3d::y)
      .def_readwrite("z", &Vector3d::z)
      .def("__str__", &Vector3d::ToString);

  //   class MyPoint {
  //   public:
  //     MyPoint(const Vector3d &);

  //     Vector3d &GetMyPoint();

  //   private:
  //     Vector3d point_;
  //   };
  py::class_<MyPoint>(m, "MyPoint")
      .def(py::init<const Vector3d &>())
      .def("GetMyPoint", &MyPoint::GetMyPoint);
}