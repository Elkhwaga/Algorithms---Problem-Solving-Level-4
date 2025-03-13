#include <iostream>
#include "date.hpp"

void printDaysHoursMinutesSeconds(short year)
{
    std::cout << "Number of days in year [" << year << "] is: " << Date::numberOfDaysInYear(year) << std::endl;

    std::cout << "Number of hours in year [" << year << "] is: " << Date::numberOfHoursInYear(year) << std::endl;

    std::cout << "Number of minutes in year [" << year << "] is: " << Date::numberOfMinutesInYear(year) << std::endl;

    std::cout << "Number of seconds in year [" << year << "] is: " << Date::numberOfSecondsInYear(year) << std::endl;
}

int main()
{
    std::string year = Date::readYear();

    printDaysHoursMinutesSeconds(std::stoi(year));
}