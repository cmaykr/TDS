cmake_minimum_required(VERSION 3.13)

project(TDS)

find_package(Catch2 3 REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories(include)

add_library(TDS_main STATIC src/main.cpp src/game.cpp src/vector2.cpp)

add_executable(TDS src/main.cpp)

target_link_libraries(TDS TDS_main)

add_executable(tests-main Tests/vector2_test.cpp Tests/test_main.cpp)
target_link_libraries(tests-main PRIVATE Catch2::Catch2)