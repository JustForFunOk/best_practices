# Pybind11 Struct and Class


## 编译

``` c++
g++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) pybind11_point.cpp my_point.cpp -o pybind11_point.so
```
注意：

* pybind11_math.so中的`pybind11_math`要和`pybind11_math.cpp`中的`PYBIND11_MODULE(pybind11_math, m)`中的`pybind11_math`保持名称一致