cmake_minimum_required(VERSION 3.21)
project(C__Playground)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Playground main.cpp)
add_executable(functions functions.cpp)

add_executable(Car CarLot.cpp Vehicle.h)