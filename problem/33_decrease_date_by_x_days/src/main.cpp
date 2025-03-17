#include "ReadDate.hpp"
#include "decrease.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short days = InputNumber::readNumberInRange("Enter a number of days: ", 1, 2000);

    Date = Decrease::decreaseDateByXDays(days, Date);

    std::cout << "\nSubtracting " << days << " days is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}