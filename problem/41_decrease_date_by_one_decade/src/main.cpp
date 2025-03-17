#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneDecade(Date);

    std::cout << "\nSubtracting one decade is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}