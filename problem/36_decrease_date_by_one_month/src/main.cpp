#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneMonth(Date);

    std::cout << "\nAfter Subtracting one month is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}