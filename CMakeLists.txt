cmake_minimum_required(VERSION 3.10)
project(InventoryManagementSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(InventoryManagementSystem src/main.cpp src/Item.cpp src/Inventory.cpp)