cmake_minimum_required(VERSION 3.20)
project(library VERSION 0.1.0 LANGUAGES C CXX)

if(TEST_LIBRARY)
    enable_testing()
    add_subdirectory(test)
endif()

configure_file(config_library.h.in config_library.h @ONLY)
include_directories(${PROJECT_BINARY_DIR})

add_library(library STATIC src/library.cpp)
include_directories(include)
