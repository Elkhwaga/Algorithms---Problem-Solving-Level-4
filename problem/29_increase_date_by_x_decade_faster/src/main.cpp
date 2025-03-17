#include "ReadDate.hpp"
#include "increase.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short decades = InputNumber::readNumberInRange("Enter a number of decades: ", 1, 1000);

    Date = Increase::increaseDateByXDecadesFaster(decades, Date);

    std::cout << "\nAdding " << decades << " decades is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}