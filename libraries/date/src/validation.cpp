#include "validation.hpp"
#include <iostream>

bool Validation::isValidDate(MyDate Date)
{
    if (Date.day > MyDate::numberOfDaysInMonth(Date.month, Date.year))
    {
        std::cout << "\n=== enter a valid date ===\n"
                  << std::endl;
        return false;
    }
    return true;
}

bool Validation::isFirstDayInMonth(MyDate Date)
{
    return (Date.day == 1);
}

bool Validation::isLastDayInMonth(MyDate Date)
{
    return (Date.day == MyDate::numberOfDaysInMonth(Date.month, Date.year));
}

bool Validation::isFirstMonthInYear(unsigned short month)
{
    return month == 1;
}

bool Validation::isLastMonthInYear(unsigned short month)
{
    return (month == 12);
}