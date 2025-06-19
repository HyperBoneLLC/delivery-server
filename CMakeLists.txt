cmake_minimum_required(VERSION 4.0)
project(delivery_server)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp
        network/network.h
        network/network.cpp)
