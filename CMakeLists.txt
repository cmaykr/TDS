cmake_minimum_required(VERSION 3.13)

project(TDS)

find_package(Catch2 3 REQUIRED)
find_package(SDL2 REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(include)
add_executable(TDS src/main.cpp src/game.cpp src/screen.cpp src/color.cpp)
target_link_libraries(TDS ${SDL2_LIBRARIES})

add_library(Tests_src STATIC src/main.cpp src/game.cpp)
add_executable(tests-main Tests/vector2_test.cpp Tests/test_main.cpp Tests/color_test.cpp src/color.cpp)
target_link_libraries(tests-main PRIVATE Catch2::Catch2 Tests_src)      