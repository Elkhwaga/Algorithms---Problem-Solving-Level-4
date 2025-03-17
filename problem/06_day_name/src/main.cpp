#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

void printResult(unsigned short day, unsigned short month, unsigned short year)
{
    unsigned short dayOfWeek = MyDate::dayOfWeekOrder(day, month, year);
    std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    std::cout << "Day Order: " << dayOfWeek << std::endl;
    std::cout << "Day Name: " << MyDate::dayShortName(dayOfWeek) << std::endl;
}

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());
    unsigned short day = std::stoi(ReadDate::readDayInWeek());

    printResult(day, month, year);

    return 0;
}