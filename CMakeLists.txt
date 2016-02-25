project(Salary_Progam)
cmake_minimum_required(VERSION 2.8)

#Set compile options
SET(CMAKE_CXX_FLAGS "-O2 -Wall")

#List of all source files
SET(MY_SRC_FILES main.cc header.cc)

add_executable(Salary_Progam ${MY_SRC_FILES})

