add_library(date STATIC src/date.cpp)

target_include_directories(date PUBLIC include)

target_link_libraries(date utils check input)