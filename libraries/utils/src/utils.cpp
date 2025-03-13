#include "utils.hpp"
#include <iostream>
#include <limits>

namespace Utils
{
    void clearInputError()
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}