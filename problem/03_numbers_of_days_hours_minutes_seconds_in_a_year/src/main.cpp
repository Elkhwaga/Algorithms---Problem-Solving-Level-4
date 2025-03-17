#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printDaysHoursMinutesSeconds(unsigned short year)
{
    std::cout << "Number of days in year [" << year << "] is: " << MyDate::numberOfDaysInYear(year) << std::endl;

    std::cout << "Number of hours in year [" << year << "] is: " << MyDate::numberOfHoursInYear(year) << std::endl;

    std::cout << "Number of minutes in year [" << year << "] is: " << MyDate::numberOfMinutesInYear(year) << std::endl;

    std::cout << "Number of seconds in year [" << year << "] is: " << MyDate::numberOfSecondsInYear(year) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());

    printDaysHoursMinutesSeconds(year);
}