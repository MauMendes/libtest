cmake_minimum_required(VERSION 3.10)
set(TEST_LIB libtest)

# Add all the source files
file(GLOB_RECURSE TESTLIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(${TEST_LIB} STATIC ${TESTLIB_SOURCES})
