cmake_minimum_required(VERSION 3.10)

project(cpp-performance-benchmark)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

# recursively find all .cpp files in "src" folder
file(GLOB_RECURSE src
    "src/*.cpp"
)

add_executable(cpp-performance-benchmark main.cpp ${src})