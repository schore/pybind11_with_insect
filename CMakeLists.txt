cmake_minimum_required(VERSION 3.20)
project("pybind11 example")

# include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_library(hello_printer STATIC hello.cpp)


add_library(hello_python SHARED hello_python.cpp)
find_package(pybind11 REQUIRED)
target_link_libraries(hello_python
  PUBLIC hello_printer
  PUBLIC pybind11::pybind11)
