cmake_minimum_required(VERSION 3.10)

project(mytest)

set(MYTEST_LIB mytest)

# Add all the source files
file(GLOB_RECURSE MYTEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/mytest/*.cpp")

add_library(${MYTEST_LIB} STATIC ${MYTEST_SOURCES})
