cmake_minimum_required(VERSION 3.20)  #minimum CMake Version
project(Programmentwurf_cj VERSION 1.0 LANGUAGES C)  #Set project name

set(CMAKE_C_STANDARD 11)  #set C standard
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -pedantic") #set warnings 

# Add library
add_library(Program_lib src/developer.c src/developer_group.c)
target_include_directories(Program_lib PUBLIC include)

# add main
add_executable(Programmentwurf main.c)

target_include_directories(Programmentwurf PRIVATE include)
target_link_libraries(Programmentwurf PRIVATE Program_lib) #link library Program_lib to executable
