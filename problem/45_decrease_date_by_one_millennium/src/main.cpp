#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneMillennium(Date);

    std::cout << "\nSubtracting one millennium is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}