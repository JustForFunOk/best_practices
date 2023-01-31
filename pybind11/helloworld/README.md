# Pybind11 Hello World



## 安装pybind11
``` c++
pip3 install pybind11
```

## 文件说明

* `my_add.cpp/.h` C++源文件，核心功能放在里面
* `pybind11_math.cpp` pybind11文件，用于将C++源文件导出python可用的包
* `test_pybind11_math.py` 调用并测试导出的python包


## 编译

``` c++
g++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) example.cpp my_add.cpp -o pybind11_math.so
```
注意：

* pybind11_math.so中的`pybind11_math`要和`pybind11_math.cpp`中的`PYBIND11_MODULE(pybind11_math, m)`中的`pybind11_math`保持名称一致.
* 这里的编译命令和官方文档不一致，官方文档会导致`import pybind11_math`时无法找到对应python包

编译完毕会在当前目录下生成pybind11_math.so文件。

## 调用

在python中`import pybind11_math`即可。


## 参考

https://pybind11.readthedocs.io/en/stable/basics.html#