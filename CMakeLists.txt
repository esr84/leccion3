cmake_minimum_required (VERSION 2.6)

project (leccion3)

# remember to enable c++11!!!
add_definitions(-std=c++11)

add_executable(raii main.cpp)
add_executable(move main2.cpp)
#add_executable(raii_exceptions raii_exceptions.cpp)
