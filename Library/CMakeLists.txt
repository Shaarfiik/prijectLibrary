cmake_minimum_required(VERSION 3.30.3)

project(library)

set(ALL_FILES main.cpp book.cpp library.cpp writer.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAFS} -Wall -Werror -Wextra")

add_executable(${PROJECT_NAME} ${ALL_FILES})