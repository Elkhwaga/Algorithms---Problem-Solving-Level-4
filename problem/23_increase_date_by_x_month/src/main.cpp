#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short months = InputNumber::readNumberInRange("Enter a number of months: ", 1, 1000);
    date = date.increaseDateByXMonth(months, date);

    std::cout << "\nAdding " << months << " months is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}