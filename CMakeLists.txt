cmake_minimum_required(VERSION 3.5)
project(MainProject)

add_subdirectory(libraries/check)
add_subdirectory(libraries/date)
add_subdirectory(libraries/enums)
add_subdirectory(libraries/input)
add_subdirectory(libraries/utils)

add_subdirectory(problem/01_number_to_text)
add_subdirectory(problem/02_leap_year)
add_subdirectory(problem/03_numbers_of_days_hours_minutes_seconds_in_a_year)
add_subdirectory(problem/04_number_of_days_hours_minutes_seconds_in_a_month)
add_subdirectory(problem/05_number_of_days_in_a_month_short_logic)