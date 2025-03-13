#include <iostream>
#include "InputValidation.hpp"
#include "utils.hpp"
#include "enums.hpp"
#include "check.hpp"

int main()
{
    std::string year = Utils::readYear();

    while (!InputValidation::isValidYear(year))
    {
        Utils::clearInputError();
        std::cout << "Enter a valid year (between 1000 and 9999): " << std::endl;
        year = Utils::readYear();
    }

    if (Check::isLeapYear(std::stoi(year)) == Enums::LeapYearType::LEAP_YEAR)
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;

    return 0;
}