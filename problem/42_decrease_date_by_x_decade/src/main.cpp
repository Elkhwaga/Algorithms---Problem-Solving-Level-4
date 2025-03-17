#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short decades = InputNumber::readNumberInRange("Enter a number of decades: ", 1, 1000);
    date = date.decreaseDateByXDecade(decades, date);

    std::cout << "\nSubtracting " << decades << " decades is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}