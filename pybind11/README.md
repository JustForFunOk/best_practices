# Pybind11

## 安装pybind11
``` shell
pip3 install pybind11
```
后者
``` shell
conda install pybind11
```


## 文件说明

* `my_**.cpp/.h` C++源文件，核心功能放在里面
* `pybind11_**.cpp` pybind11文件，用于将C++源文件导出python可用的包
* `test_pybind11_**.py` 调用并测试导出的python包


## 编译

### g++手动编译

以helloworld为例

#### Linux
``` c++
g++ -O3 -Wall -shared -std=c++11 -fPIC $(python3 -m pybind11 --includes) pybind11_math.cpp my_add.cpp -o pybind11_math.so
```
注意：
* pybind11_math.so中的`pybind11_math`要和`pybind11_math.cpp`中的`PYBIND11_MODULE(pybind11_math, m)`中的`pybind11_math`保持名称一致.
* 这里的编译命令和官方文档不一致，官方文档会导致`import pybind11_math`时无法找到对应python包，应该是因为机器中python环境错乱导致

编译完毕会在当前目录下生成pybind11_math.so文件。

#### macOS
``` shell
$ c++ -O3 -Wall -shared -std=c++11 -undefined dynamic_lookup $(python3 -m pybind11 --includes) pybind11_math.cpp my_add.cpp -o example$(python3-config --extension-suffix)
```

编译完毕会在当前目录下生成`pybind11_math.cpython-39-darwin.so`文件。

## 调用

以helloworld为例，在python中`import pybind11_math`即可。


## 参考

https://pybind11.readthedocs.io/en/stable/basics.html#