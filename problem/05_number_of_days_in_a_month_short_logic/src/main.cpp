#include <iostream>
#include "date.hpp"

void printDays(short month, short year)
{
    std::cout << "Number of days in month [" << month << "] is: " << MyDate::numberOfDaysInMonth(month, year) << std::endl;
}

int main()
{
    std::string year = MyDate::readYear();
    std::string month = MyDate::readMonth();

    printDays(std::stoi(month), std::stoi(year));
}