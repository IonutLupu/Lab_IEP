cmake_minimum_required(VERSION 2.8)

project(libmytest_project)

add_library(mytest STATIC file.cpp)

install(TARGETS mytest DESTINATION lib)
install(FILES file.h DESTINATION include)
