cmake_minimum_required(VERSION 3.15)
project(arrayMultiplication)

set(CMAKE_CXX_STANDARD 14)

add_executable(arrayMultiplication src/main.cpp src/matrix.h src/matrix.cpp)