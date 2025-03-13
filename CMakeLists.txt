cmake_minimum_required(VERSION 3.5)
project(MainProject)

add_subdirectory(libraries/check)
add_subdirectory(libraries/enums)
add_subdirectory(libraries/input)
add_subdirectory(libraries/utils)

add_subdirectory(problem/01_number_to_text)
add_subdirectory(problem/02_leap_year)