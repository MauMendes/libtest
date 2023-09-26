cmake_minimum_required(VERSION 3.10)
set(MYTEST_LIB mytest)

# Add all the source files
file(GLOB_RECURSE MYTEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(${MYTEST_LIB} STATIC ${MYTEST_SOURCES})
