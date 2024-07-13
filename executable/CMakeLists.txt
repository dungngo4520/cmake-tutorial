cmake_minimum_required(VERSION 3.20)
project(executable VERSION 0.1.0 LANGUAGES C CXX)

if(TEST_EXECUTABLE)
    enable_testing()
    add_subdirectory(test)
endif()

configure_file(config_executable.h.in config_executable.h @ONLY)
include_directories(${PROJECT_BINARY_DIR})

add_executable(${PROJECT_NAME} src/main.cpp)
include_directories(include)