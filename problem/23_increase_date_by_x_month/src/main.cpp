#include "ReadDate.hpp"
#include "increase.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short months = InputNumber::readNumberInRange("Enter a number of months: ", 1, 1000);

    Date = Increase::increaseDateByXMonth(months, Date);

    std::cout << "\nAdding " << months << " months is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}