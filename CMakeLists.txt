cmake_minimum_required(VERSION 3.16)
project(Programmentwurf_cj)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

# Add library
add_library(Programm_lib src/developer.c src/developer_group.c)
target_include_directories(Programm_lib PUBLIC include)

# Hadd main
add_executable(Programmentwurf main.c)
target_link_libraries(Programmentwurf Programm_lib)
