cmake_minimum_required(VERSION 3.15...3.31)

add_library(game SHARED Game.cpp)
target_include_directories(game PUBLIC ${PROJECT_SOURCE_DIR}/include)
