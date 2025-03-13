add_library(InputValidation src/InputValidation.cpp)
add_library(Utils src/Utils.cpp)
add_library(Check src/Check.cpp)

target_include_directories(InputValidation PUBLIC include)
target_include_directories(Utils PUBLIC include)
target_include_directories(Check PUBLIC include)