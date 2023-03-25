cmake_minimum_required(VERSION 3.20)
project(WS01)

set(CMAKE_CXX_STANDARD 14)

include_directories("part 2")

add_executable(WS01
        "part 1/w1_p1.cpp"
        "part 2/foodorder.cpp"
        "part 2/foodorder.h"
        "part 2/w1_p2.cpp")
