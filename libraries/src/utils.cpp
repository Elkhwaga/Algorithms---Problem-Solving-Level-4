#include "utils.hpp"
#include <iostream>
#include <limits>

namespace Utils
{
    std::string readYear()
    {
        std::string input;
        std::cout << "Enter a year (between 1000 and 9999): " << std::endl;
        std::cin >> input;
        return input;
    }

    void clearInputError()
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}