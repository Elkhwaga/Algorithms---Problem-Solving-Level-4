#include <iostream>
#include "date.hpp"
#include "enums.hpp"

int main()
{
    std::string year = MyDate::readYear();

    if (Enums::isLeapYear(std::stoi(year)) == LeapYearType::LEAP_YEAR)
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;

    return 0;
}