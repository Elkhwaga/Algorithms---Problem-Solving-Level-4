add_library(date STATIC
    src/compare.cpp
    src/date.cpp
    src/decrease.cpp
    src/display.cpp
    src/increase.cpp
    src/period.cpp
    src/ReadDate.cpp
    src/validation.cpp
    src/work.cpp
)

target_include_directories(date PUBLIC include)

target_link_libraries(date utils check input enums)