cmake_minimum_required(VERSION 2.8)

project(myapp)

add_executable(myapp main.c)

target_link_libraries(myapp libmyfile.a)

install(TARGETS myapp DESTINATION bin)
