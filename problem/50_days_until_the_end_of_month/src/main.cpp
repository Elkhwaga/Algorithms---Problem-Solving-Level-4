#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    std::cout << "\nDays util the end of month: " << MyDate::daysUtilTheEndOfMonth(Date) << std::endl;

    return 0;
}