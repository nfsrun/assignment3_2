cmake_minimum_required(VERSION 3.8)
project(assignment3_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES BarberShop.cpp LinkedStack.h Customer.h BarberShop.h)
add_executable(assignment3_2 ${SOURCE_FILES})