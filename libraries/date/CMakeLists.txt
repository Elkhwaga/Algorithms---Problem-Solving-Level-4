add_library(date STATIC src/date.cpp src/period.cpp)

target_include_directories(date PUBLIC include)

target_link_libraries(date utils check input enums)