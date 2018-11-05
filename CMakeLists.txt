# cmake_minimum_required(VERSION <specify CMake version here>)
project(As1)

set(CMAKE_CXX_STANDARD 14)

add_executable(As1 src/Main.cpp include/Restaurant.h include/Table.h include/Customer.h include/Action.h include/Dish.h src/Restaurant.cpp src/Menu.cpp src/Table.cpp src/Dish.cpp src/Customer.cpp src/Action.cpp)