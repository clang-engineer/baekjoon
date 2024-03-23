# minimum cmake version
cmake_minimum_required(VERSION 3.11)

# project info 
project(baekjoon
  VERSION 1.0.0
  DESCRIPTION "BaekJoon Algorithm"
  LANGUAGES CXX)

# library output directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# executable output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# subdirectories
add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(tests)
