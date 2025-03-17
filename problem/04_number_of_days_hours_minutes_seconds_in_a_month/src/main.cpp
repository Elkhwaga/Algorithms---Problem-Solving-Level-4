#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printDaysHoursMinutesSeconds(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << MyDate::numberOfDaysInMonth(month, year) << std::endl;

    std::cout << "Number of hours in month [" << month << "] is: " << MyDate::numberOfHoursInMonth(month, year) << std::endl;

    std::cout << "Number of minutes in month [" << month << "] is: " << MyDate::numberOfMinutesInMonth(month, year) << std::endl;

    std::cout << "Number of seconds in month [" << month << "] is: " << MyDate::numberOfSecondsInMonth(month, year) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());

    printDaysHoursMinutesSeconds(month, year);
}