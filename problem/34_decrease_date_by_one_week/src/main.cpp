#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneWeek(Date);

    std::cout << "\nAfter Subtracting one week is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}