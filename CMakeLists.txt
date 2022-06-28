cmake_minimum_required(VERSION 3.20)
project(TestExercise)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestExercise main.cpp TextAdderBySTD.cpp TextAdderBySTD.hpp textAdderByLinux.cpp textAdderByLinux.hpp)
