#include "ReadDate.hpp"
#include "increase.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short years = InputNumber::readNumberInRange("Enter a number of years: ", 1, 1000);

    Date = Increase::increaseDateByXYear(years, Date);

    std::cout << "\nAdding " << years << " years is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}