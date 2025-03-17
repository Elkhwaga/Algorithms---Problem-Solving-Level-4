#include "date.hpp"
#include "work.hpp"
#include <iostream>

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    std::cout << "\nDays util the end of week: " << Work::daysUtilTheEndOfWeek(Date) << std::endl;

    return 0;
}