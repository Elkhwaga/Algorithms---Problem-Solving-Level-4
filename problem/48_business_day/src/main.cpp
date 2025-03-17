#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    (Date.isBusinessDay(Date))
        ? std::cout << "Today is a business day" << std::endl
        : std::cout << "Today is not a business day" << std::endl;

    return 0;
}