cmake_minimum_required(VERSION 3.15...3.31)

add_library(board SHARED Board.cpp)
target_include_directories(board PUBLIC ${PROJECT_SOURCE_DIR}/include)
