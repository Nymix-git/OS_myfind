cmake_minimum_required(VERSION 3.24.3)

project("myfind")

add_executable(${PROJECT_NAME} ./src/main.c)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)