#include <iostream>
#include "date.hpp"

void printDaysHoursMinutesSeconds(unsigned short year)
{
    std::cout << "Number of days in year [" << year << "] is: " << MyDate::numberOfDaysInYear(year) << std::endl;

    std::cout << "Number of hours in year [" << year << "] is: " << MyDate::numberOfHoursInYear(year) << std::endl;

    std::cout << "Number of minutes in year [" << year << "] is: " << MyDate::numberOfMinutesInYear(year) << std::endl;

    std::cout << "Number of seconds in year [" << year << "] is: " << MyDate::numberOfSecondsInYear(year) << std::endl;
}

int main()
{
    std::string year = MyDate::readYear();

    printDaysHoursMinutesSeconds(std::stoi(year));
}