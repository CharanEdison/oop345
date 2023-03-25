cmake_minimum_required(VERSION 3.20)
project(w3p2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(w3p2
        Collection.h
        Pair.cpp
        Pair.h
        Set.h
        w3_p2.cpp)
