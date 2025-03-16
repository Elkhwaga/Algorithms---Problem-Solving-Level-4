add_library(InputValidation STATIC src/InputValidation.cpp)
add_library(Utils STATIC src/Utils.cpp)
add_library(Check STATIC src/Check.cpp)

target_include_directories(InputValidation PUBLIC include)
target_include_directories(Utils PUBLIC include)
target_include_directories(Check PUBLIC include)
