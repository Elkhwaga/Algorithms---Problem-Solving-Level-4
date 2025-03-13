#include "InputString.hpp"
#include <iostream>

namespace InputString
{
    std::string readYear()
    {
        std::string input;
        std::cout << "Enter a year (between 1000 and 9999): " << std::endl;
        std::cin >> input;
        return input;
    }
}
