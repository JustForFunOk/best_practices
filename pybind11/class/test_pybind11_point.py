#!/usr/bin/env python3

import pybind11_point

vec = pybind11_point.Vector3d()
vec.x = 1.0
vec.y = 2.0
vec.z = 3.0
print(vec)

point = pybind11_point.MyPoint(vec)
output_vec = point.GetMyPoint()
print(output_vec)
