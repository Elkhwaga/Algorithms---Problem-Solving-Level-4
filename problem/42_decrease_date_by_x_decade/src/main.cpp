#include "ReadDate.hpp"
#include "decrease.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short decades = InputNumber::readNumberInRange("Enter a number of decades: ", 1, 1000);

    Date = Decrease::decreaseDateByXDecade(decades, Date);

    std::cout << "\nSubtracting " << decades << " decades is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}