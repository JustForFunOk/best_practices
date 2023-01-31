#pragma once

#include <string>

struct Vector3d {
  double x;
  double y;
  double z;

  std::string ToString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " +
           std::to_string(z) + ")";
  }
};

class MyPoint {
public:
  MyPoint(const Vector3d &);

  Vector3d &GetMyPoint();

private:
  Vector3d point_;
};

struct Pet {
  Pet(const std::string &name) : name(name) {}
  void setName(const std::string &name_) { name = name_; }
  const std::string &getName() const { return name; }

  std::string name;
};