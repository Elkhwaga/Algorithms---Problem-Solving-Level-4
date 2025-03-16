#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short days = InputNumber::readNumberInRange("Enter a number of days: ", 1, 2000);
    date = date.increaseDateByOneDay(date);

    std::cout << "\nAdding " << days << " days is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}