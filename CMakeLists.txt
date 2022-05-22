cmake_minimum_required(VERSION 3.21)
project(Demo)

set(CMAKE_CXX_STANDARD 11)

add_executable(Demo code/main.cpp code/cast.cpp code/array.cpp code/pointer.cpp code/io_simple_test.cpp code/method.cpp code/ref.cpp code/template_method.cpp)
