#include <iostream>
#include "date.hpp"

void printDaysHoursMinutesSeconds(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << MyDate::numberOfDaysInMonth(month, year) << std::endl;

    std::cout << "Number of hours in month [" << month << "] is: " << MyDate::numberOfHoursInMonth(month, year) << std::endl;

    std::cout << "Number of minutes in month [" << month << "] is: " << MyDate::numberOfMinutesInMonth(month, year) << std::endl;

    std::cout << "Number of seconds in month [" << month << "] is: " << MyDate::numberOfSecondsInMonth(month, year) << std::endl;
}

int main()
{
    std::string year = MyDate::readYear();
    std::string month = MyDate::readMonth();

    printDaysHoursMinutesSeconds(std::stoi(month), std::stoi(year));
}