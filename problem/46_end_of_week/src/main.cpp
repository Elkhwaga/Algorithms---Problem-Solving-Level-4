#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date = Date.getSystemDate();

    std::cout << "\nToday is: "
              << Date.dayShortName(Date.dayOfWeekOrder(Date)) << " , "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    (Date.isEndOfWeek(Date))
        ? std::cout << "Today is the end of the week" << std::endl
        : std::cout << "Today is not the end of the week" << std::endl;

    return 0;
}