#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date1 = Date1.readFullDate();

    (MyDate::isLastDayInMonth(Date1))
        ? std::cout << "\nYes, Day is last day in month."
        : std::cout << "\nNo, Day is not last day in month." << std::endl;

    (MyDate::isLastMonthInYear(Date1.month))
        ? std::cout << "\nYes, Month is last month in year."
        : std::cout << "\nNo, Month is not last month in year." << std::endl;

    return 0;
}