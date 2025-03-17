#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date1 = Date1.readFullDate();

    Date1 = Date1.decreaseDateByOneDay(Date1);

    std::cout << "\nDate after Subtracting on day is: "
              << Date1.day << "/" << Date1.month << "/" << Date1.year << std::endl;

    return 0;
}