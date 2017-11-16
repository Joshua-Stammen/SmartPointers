cmake_minimum_required(VERSION 3.8)
project(SmartPointers)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
set(SOURCE_FILES Memory.cpp Person.cpp Person.h)
add_executable(SmartPointers ${SOURCE_FILES})