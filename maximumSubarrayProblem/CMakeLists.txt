cmake_minimum_required(VERSION 3.15)
project(maximumSubarrayProblem)

set(CMAKE_CXX_STANDARD 14)

add_executable(maximumSubarrayProblem src/main.cpp src/bruteForceFindMax.tcc src/findMaxSubarray.tcc src/kadane.tcc src/returnStruct.h)