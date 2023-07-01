set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

cmake_minimum_required(VERSION 3.22)

project(CRYPTOGRAPHY)

aux_source_directory(. DIR_SRCS)

add_subdirectory(include)

add_executable(main main.cpp)

target_link_libraries(main cryptography) 
