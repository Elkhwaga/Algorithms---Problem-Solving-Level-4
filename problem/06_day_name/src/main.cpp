#include <iostream>
#include "date.hpp"

void printResult(unsigned short day, unsigned short month, unsigned short year)
{
    unsigned short dayOfWeek = MyDate::dayOfWeekOrder(day, month, year);
    std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    std::cout << "Day Order: " << dayOfWeek << std::endl;
    std::cout << "Day Name: " << MyDate::dayShortName(dayOfWeek) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(MyDate::readYear());
    unsigned short month = std::stoi(MyDate::readMonth());
    unsigned short day = std::stoi(MyDate::readDayInWeek());

    printResult(day, month, year);

    return 0;
}