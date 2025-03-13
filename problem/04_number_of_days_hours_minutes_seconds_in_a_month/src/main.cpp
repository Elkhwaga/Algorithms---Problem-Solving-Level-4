#include <iostream>
#include "date.hpp"

void printDaysHoursMinutesSeconds(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << Date::numberOfDaysInMonth(month, year) << std::endl;

    std::cout << "Number of hours in month [" << month << "] is: " << Date::numberOfHoursInMonth(month, year) << std::endl;

    std::cout << "Number of minutes in month [" << month << "] is: " << Date::numberOfMinutesInMonth(month, year) << std::endl;

    std::cout << "Number of seconds in month [" << month << "] is: " << Date::numberOfSecondsInMonth(month, year) << std::endl;
}

int main()
{
    std::string year = Date::readYear();
    std::string month = Date::readMonth();

    printDaysHoursMinutesSeconds(std::stoi(month), std::stoi(year));
}