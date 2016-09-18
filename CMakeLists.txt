cmake_minimum_required(VERSION 2.4)
project(xlUnitTest)
file(GLOB_RECURSE SRC_LIST "Test/*cpp")
add_executable(Test ${SRC_LIST})
