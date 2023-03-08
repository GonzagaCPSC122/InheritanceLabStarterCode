# note: following this post for setting up CMake
# https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html

cmake_minimum_required (VERSION 2.8)

project(InheritanceLab)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall")

# make an automatic library
add_library(pa_library Employee.cpp Employee.h Programmer.cpp Programmer.h Lawyer.cpp Lawyer.h Accountant.cpp Accountant.h)

# create unit test executable
add_subdirectory(test)

# create main executable
add_executable(run${PROJECT_NAME} Main.cpp Employee.cpp Programmer.cpp Lawyer.cpp Accountant.cpp)

