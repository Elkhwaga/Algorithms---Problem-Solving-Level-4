#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    (Date.isWeekEnd(Date))
        ? std::cout << "Today is a week end" << std::endl
        : std::cout << "Today is not a week end" << std::endl;

    return 0;
}