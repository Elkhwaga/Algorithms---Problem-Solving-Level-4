#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short weeks = InputNumber::readNumberInRange("Enter a number of weeks: ", 1, 1000);
    date = date.decreaseDateByXWeeks(weeks, date);

    std::cout << "\nSubtracting " << weeks << " weeks is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}