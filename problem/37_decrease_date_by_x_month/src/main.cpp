#include "ReadDate.hpp"
#include "decrease.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short months = InputNumber::readNumberInRange("Enter a number of months: ", 1, 1000);

    Date = Decrease::decreaseDateByXMonth(months, Date);

    std::cout << "\nSubtracting " << months << " months is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}