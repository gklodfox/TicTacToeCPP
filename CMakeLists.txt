cmake_minimum_required(VERSION 3.15...3.31)

project(TicTacToe VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src/app)
add_subdirectory(src/board)
add_subdirectory(src/agent)
add_subdirectory(src/game)
