cmake_minimum_required(VERSION 3.15...3.31)

include(FetchContent)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG master)
FetchContent_MakeAvailable(fmt)

add_executable(application main.cpp)
target_link_libraries(application PRIVATE fmt::fmt)
