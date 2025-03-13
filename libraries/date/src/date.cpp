#include "date.hpp"
#include "utils.hpp"
#include "check.hpp"
#include "InputValidation.hpp"
#include <iostream>

namespace Date
{
    std::string readYear()
    {
        std::string input;
        std::cout << "Enter a year (between 1000 and 9999): " << std::endl;
        std::cin >> input;
        while (!InputValidation::isValidYear(input))
        {
            std::cout << "Enter a valid year (between 1000 and 9999): " << std::endl;
            std::cin >> input;
        }
        return input;
    }

    short numberOfDaysInYear(short year)
    {
        return Check::isLeapYear(year) ? 366 : 365;
    }

    short numberOfHoursInYear(short year)
    {
        return numberOfDaysInYear(year) * 24;
    }

    short numberOfMinutesInYear(short year)
    {
        return numberOfHoursInYear(year) * 60;
    }

    int numberOfSecondsInYear(short year)
    {
        return numberOfMinutesInYear(year) * 60;
    }
}