cmake_minimum_required(VERSION 3.20)
project(library_test VERSION 0.1.0 LANGUAGES C CXX)

add_executable(${PROJECT_NAME} main_test.cpp)
include_directories(${PROJECT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE library)

add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
