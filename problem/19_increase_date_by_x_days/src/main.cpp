#include "ReadDate.hpp"
#include "increase.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short days = InputNumber::readNumberInRange("Enter a number of days: ", 1, 2000);

    Date = Increase::increaseDateByXDays(days, Date);

    std::cout << "\nAdding " << days << " days is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}