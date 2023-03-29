cmake_minimum_required(VERSION 3.12)
project(libuv-learning VERSION 1.0)

# Project related source codes
set(
    PROJECT_SOURCE
    libuv-demo.cpp
)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Target related directory/lib settings

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# Executable settings
add_executable(libuv ${PROJECT_SOURCE})

# Adding sub-directory
add_subdirectory(src)


target_link_libraries(libuv PUBLIC demo)