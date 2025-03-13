#include "../include/InputValidation.hpp"
#include <cctype>

namespace InputValidation
{
    bool checkLength(const std::string &input, int requiredLength)
    {
        return input.length() == requiredLength;
    }

    bool checkDigitOnly(const std::string &input)
    {
        for (char c : input)
        {
            if (!isdigit(c))
                return false;
        }
        return true;
    }

    bool isValidYear(const std::string &year)
    {
        if (checkLength(year, 4) && !checkDigitOnly(year))
            return false;

        return (std::stoi(year) >= 1000 && std::stoi(year) <= 9999);
    }
}
