#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();

    Date = Decrease::decreaseDateByOneDay(Date);

    std::cout << "\nDate after Subtracting on day is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}