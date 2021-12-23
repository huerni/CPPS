cmake_minimum_required(VERSION 3.21)
project(CPPS)

set(CMAKE_CXX_STANDARD 14)

#add_executable(CPPS main.cpp test/main.cpp)
ADD_SUBDIRECTORY(test)
ADD_SUBDIRECTORY(chapter_2)
ADD_SUBDIRECTORY(chapter_3)