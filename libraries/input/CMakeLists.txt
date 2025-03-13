add_library(input STATIC
    src/InputNumber.cpp
    src/InputString.cpp
    src/InputValidation.cpp
)

target_include_directories(input PUBLIC include)

target_link_libraries(input utils)