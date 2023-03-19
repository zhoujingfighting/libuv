



## libuv

The `libuv` repository is forked from [libuv](https://github.com/libuv/libuv)

### How to build 

```
cmake . -B build -G Ninja -DCMAKE_INSTALL_PREFIX=/home/triton/Codes/linbuv/libuv-learning/install -DCMAKE_BUILD_TYPE=Debug
```
```
ninja -C build && ninja -C install
```