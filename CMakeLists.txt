cmake_minimum_required(VERSION 3.20)
project("pybind11 example")

# include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(hello_printer STATIC hello.cpp)



#Pybind starts here

find_package(Python COMPONENTS Interpreter Development REQUIRED)
add_subdirectory(pybind11)

pybind11_add_module(hello_python hello_python.cpp)

target_link_libraries(hello_python
  PRIVATE hello_printer)
