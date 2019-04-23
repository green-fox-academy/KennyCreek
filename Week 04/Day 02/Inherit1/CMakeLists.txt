cmake_minimum_required(VERSION 3.13)
project(Inherit1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inherit1 main.cpp Person.cpp Person.h Student.cpp Student.h Mentor.cpp Mentor.h)