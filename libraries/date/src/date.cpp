#include "date.hpp"
#include "utils.hpp"
#include "check.hpp"
#include "enum.hpp"
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
        return numberOfDaysInYear(year) * static_cast<short>(DateType::HOUR);
    }

    short numberOfMinutesInYear(short year)
    {
        return numberOfHoursInYear(year) * static_cast<short>(DateType::MINUTE);
    }

    int numberOfSecondsInYear(short year)
    {
        return numberOfMinutesInYear(year) * static_cast<short>(DateType::SECOND);
    }

    short numberOfDaysInMonth(short month, short year)
    {
        if (!Check::isNumberInRange(month, 1, 12))
            return 0;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return Check::isLeapYear(year) ? 29 : 28;
        }

        return 0;
    }

    short numberOfHoursInMonth(short month, short year)
    {
        return numberOfDaysInMonth(month, year) * static_cast<short>(DateType::HOUR);
    }

    short numberOfMinutesInMonth(short month, short year)
    {
        return numberOfHoursInMonth(month, year) * static_cast<short>(DateType::MINUTE);
    }

    int numberOfSecondsInMonth(short month, short year)
    {
        return numberOfMinutesInMonth(month, year) * static_cast<short>(DateType::SECOND);
    }
}