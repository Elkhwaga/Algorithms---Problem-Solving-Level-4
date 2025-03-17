#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneYear(Date);

    std::cout << "\nAfter Subtracting one year is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}