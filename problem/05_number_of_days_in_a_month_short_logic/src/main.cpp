#include <iostream>
#include "date.hpp"

void printDays(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << Date::numberOfDaysInMonth(month, year) << std::endl;
}

int main()
{
    std::string year = Date::readYear();
    std::string month = Date::readMonth();

    printDays(std::stoi(month), std::stoi(year));
}