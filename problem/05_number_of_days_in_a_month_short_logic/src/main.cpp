#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printDays(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << MyDate::numberOfDaysInMonth(month, year) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());

    printDays(month, year);
}