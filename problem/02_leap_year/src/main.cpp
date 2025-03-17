#include "ReadDate.hpp"
#include "enums.hpp"
#include <iostream>

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());

    if (Enums::isLeapYear(year) == LeapYearType::LEAP_YEAR)
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;

    return 0;
}