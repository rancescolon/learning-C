# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.27)

# Define your project name
project(C_Learning C)
# Set the C standard for the project
set(CMAKE_C_STANDARD 11)



add_executable(new_target learningCode/print.c
)



# and so on for each file with a main function

add_executable(new_target1 learningCode/array.c)
