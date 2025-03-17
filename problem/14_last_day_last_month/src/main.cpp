#include "ReadDate.hpp"
#include "validation.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();

    (Validation::isLastDayInMonth(Date))
        ? std::cout << "\nYes, Day is last day in month."
        : std::cout << "\nNo, Day is not last day in month." << std::endl;

    (Validation::isLastMonthInYear(Date.month))
        ? std::cout << "\nYes, Month is last month in year."
        : std::cout << "\nNo, Month is not last month in year." << std::endl;

    return 0;
}