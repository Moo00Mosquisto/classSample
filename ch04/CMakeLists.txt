cmake_minimum_required(VERSION 3.6)
project(ch04)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        01_linkedListClass/ArrayBag.h
        01_linkedListClass/BagInterface.h
        01_linkedListClass/LinkedBag.h
        01_linkedListClass/main.cpp
        01_linkedListClass/node.h)

add_executable(ch04 ${SOURCE_FILES})