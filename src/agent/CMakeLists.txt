cmake_minimum_required(VERSION 3.15...3.31)

add_library(agent STATIC HumanAgent.cpp)
target_include_directories(agent PUBLIC ${PROJECT_SOURCE_DIR}/include)
