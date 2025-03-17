#include "date.hpp"
#include "work.hpp"
#include <iostream>

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    (Work::isBusinessDay(Date))
        ? std::cout << "Today is a business day" << std::endl
        : std::cout << "Today is not a business day" << std::endl;

    return 0;
}