#include "my_point.h"

MyPoint::MyPoint(const Vector3d &input_point) : point_(input_point) {}

Vector3d &MyPoint::GetMyPoint() { return point_; }