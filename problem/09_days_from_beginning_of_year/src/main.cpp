#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printResult(unsigned short day, unsigned short month, unsigned short year)
{
    std::cout << "Number of days from the beginning of the year is: "
              << MyDate::numberOfDaysFromBeginningOfTheYear(day, month, year) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());
    unsigned short day = std::stoi(ReadDate::readDayInWeek());

    printResult(day, month, year);
    return 0;
}