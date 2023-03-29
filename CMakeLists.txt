cmake_minimum_required(VERSION 3.12)
project(libuv-learning VERSION 1.0)

# Adding sub-directory
# add_subdirectory(libuv)


# Project related source codes
set(
    PROJECT_SOURCE
    libuv-demo.cpp
)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Target related directory/lib settings



# Executable settings
add_executable(libuv ${PROJECT_SOURCE})
target_link_directories(libuv PUBLIC libuv-learning/install/lib)
target_link_libraries(libuv  PUBLIC uv)
target_include_directories(libuv PUBLIC libuv-learning/install/include)
