cmake_minimum_required(VERSION 3.13)

project(TDS)

include_directories(include)

add_library(TDS_main STATIC src/main.cpp src/game.cpp src/vector2.cpp)

add_executable(TDS src/main.cpp)

target_link_libraries(TDS TDS_main)