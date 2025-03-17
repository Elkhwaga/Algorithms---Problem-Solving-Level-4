#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short years = InputNumber::readNumberInRange("Enter a number of years: ", 1, 1000);
    date = date.increaseDateByXYear(years, date);

    std::cout << "\nAdding " << years << " years is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}