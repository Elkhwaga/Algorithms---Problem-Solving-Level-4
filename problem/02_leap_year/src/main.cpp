#include <iostream>
#include "InputValidation.hpp"
#include "InputString.hpp"
#include "utils.hpp"
#include "enums.hpp"

int main()
{
    std::string year = InputString::readYear();

    while (!InputValidation::isValidYear(year))
    {
        Utils::clearInputError();
        std::cout << "Enter a valid year (between 1000 and 9999): " << std::endl;
        year = InputString::readYear();
    }

    if (Enums::isLeapYear(std::stoi(year)) == LeapYearType::LEAP_YEAR)
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;

    return 0;
}