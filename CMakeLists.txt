cmake_minimum_required(VERSION 3.24)
project(BIL142Project)

set(CMAKE_CXX_STANDARD 17)
include_directories(inc)
include_directories(src)

add_executable(BIL142Project main.cpp src/gameManager.cpp src/eventManager.cpp src/SpaceShip.cpp src/LightShip.cpp src/NormalShip.cpp src/HeavyShip.cpp)
