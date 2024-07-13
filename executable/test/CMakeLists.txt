cmake_minimum_required(VERSION 3.20)
project(executable_test VERSION 0.1.0 LANGUAGES C CXX)

add_executable(${PROJECT_NAME} main_test.cpp)

add_test(NAME "Test1" COMMAND ${PROJECT_NAME} WORKING_DIRECTORY ${CMAKE_BINARY_DIR})