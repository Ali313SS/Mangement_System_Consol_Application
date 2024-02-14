cmake_minimum_required(VERSION 3.25)
project(Mangement_System)

set(CMAKE_CXX_STANDARD 23)

add_executable(Mangement_System main.cpp Mangement_System.h Course.h Assignment.h Doctor.cpp Person.h Doctor.h Questions.h Course.cpp)
