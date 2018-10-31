cmake_minimum_required(VERSION 2.8)

project(myapp)

add_executable(myapp app.cpp)

target_link_libraries(myapp mytest)

install(TARGETS myapp DESTINATION bin)
