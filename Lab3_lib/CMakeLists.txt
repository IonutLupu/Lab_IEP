cmake_minimum_required(VERSION 2.8)

project(libmyfile_project)

add_library(myfile STATIC file.c)

install(TARGETS myfile DESTINATION lib)
install(FILES file.h DESTINATION include)
