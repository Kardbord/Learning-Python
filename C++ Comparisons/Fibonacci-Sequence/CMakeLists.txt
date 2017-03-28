cmake_minimum_required(VERSION 3.6)
project(Fibonacci_Sequence)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp FibNumber.cpp FibNumber.h)
add_executable(Fibonacci_Sequence ${SOURCE_FILES})