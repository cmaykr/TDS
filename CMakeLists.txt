cmake_minimum_required(VERSION 3.13)

project(TDS)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake_sdl2)

find_package(Catch2 3 REQUIRED)
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(include)
add_executable(TDS src/main.cpp src/game.cpp src/screen.cpp src/color.cpp src/resourceManager.cpp src/sprite.cpp)
target_link_libraries(TDS SDL2::Main SDL2::Image)

add_library(Tests_src STATIC src/main.cpp src/game.cpp)
add_executable(tests-main Tests/vector2_test.cpp Tests/test_main.cpp Tests/color_test.cpp src/color.cpp)
target_link_libraries(tests-main PRIVATE Catch2::Catch2 Tests_src)      