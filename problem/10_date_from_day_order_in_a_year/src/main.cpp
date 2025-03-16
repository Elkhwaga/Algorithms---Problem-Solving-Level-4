#include <iostream>
#include "date.hpp"

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
    unsigned short year = std::stoi(MyDate::readYear());
    unsigned short month = std::stoi(MyDate::readMonth());
    unsigned short day = std::stoi(MyDate::readDayInMonth());

    printResult(day, month, year);

    return 0;
}