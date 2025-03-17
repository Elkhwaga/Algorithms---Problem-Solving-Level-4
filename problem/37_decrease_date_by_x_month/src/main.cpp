#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short months = InputNumber::readNumberInRange("Enter a number of months: ", 1, 1000);
    date = date.decreaseDateByXMonth(months, date);

    std::cout << "\nSubtracting " << months << " months is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}