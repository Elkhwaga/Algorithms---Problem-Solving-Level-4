#include "ReadDate.hpp"
#include "decrease.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Decrease::decreaseDateByOneCentury(Date);

    std::cout << "\nSubtracting one century is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}