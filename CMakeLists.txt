cmake_minimum_required(VERSION 3.20)
project(cmake VERSION 0.1.0 LANGUAGES C CXX)

option(BUILD_EXECUTABLE "Build executable" ON)
option(BUILD_LIBRARY "Build library" ON)
option(BUILD_DRIVER "Build driver" OFF)
option(TEST_EXECUTABLE "Test executable" ON)
option(TEST_LIBRARY "Test library" ON)

message(STATUS "Build for ${CMAKE_SYSTEM_NAME}")

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(WINDOWS 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(LINUX 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(MACOS 1)
endif()

configure_file(config.h.in config.h @ONLY)
include_directories(${PROJECT_BINARY_DIR})

# driver
message(STATUS "Build driver ${BUILD_DRIVER}")

if(BUILD_DRIVER)
    add_subdirectory(driver)
endif()

# executable
message(STATUS "Build executable ${BUILD_EXECUTABLE} with test ${TEST_EXECUTABLE}")

if(BUILD_EXECUTABLE)
    add_subdirectory(executable)
endif()

# library
message(STATUS "Build library ${BUILD_LIBRARY} with test ${TEST_LIBRARY}")

if(BUILD_LIBRARY)
    add_subdirectory(library)
endif()