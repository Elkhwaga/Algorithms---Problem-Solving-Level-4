#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printResult(unsigned short day, unsigned short month, unsigned short year)
{
    unsigned short daysOrderInYear = MyDate::numberOfDaysFromBeginningOfTheYear(day, month, year);

    MyDate date;
    date = date.getDateFromDayOrderInYear(daysOrderInYear, year);

    std::cout << "Date for [" << daysOrderInYear << "] is: ";
    std::cout << date.day << "/" << date.month << "/" << date.year << std::endl;
}
int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());
    unsigned short day = std::stoi(ReadDate::readDayInWeek());

    printResult(day, month, year);

    return 0;
}