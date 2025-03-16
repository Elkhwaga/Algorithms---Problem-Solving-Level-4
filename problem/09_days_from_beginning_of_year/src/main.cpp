#include <iostream>
#include "date.hpp"

void printResult(unsigned short day, unsigned short month, unsigned short year)
{
    std::cout << "Number of days from the beginning of the year is: "
              << MyDate::numberOfDaysFromBeginningOfTheYear(day, month, year) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(MyDate::readYear());
    unsigned short month = std::stoi(MyDate::readMonth());
    unsigned short day = std::stoi(MyDate::readDayInMonth());

    printResult(day, month, year);
    return 0;
}