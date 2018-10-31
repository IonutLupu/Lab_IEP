cmake_minimum_required(VERSION 2.8)

project(myapp_project)

add_subdirectory(testl)

add_executable(myapp app.cpp)

target_link_libraries(myapp testl)