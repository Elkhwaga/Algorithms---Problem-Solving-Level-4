#include "ReadDate.hpp"
#include "increase.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    unsigned short weeks = InputNumber::readNumberInRange("Enter a number of weeks: ", 1, 1000);

    Date = Increase::increaseDateByXWeeks(weeks, Date);

    std::cout << "\nAdding " << weeks << " weeks is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}