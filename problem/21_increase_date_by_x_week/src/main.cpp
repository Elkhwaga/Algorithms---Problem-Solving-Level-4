#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    unsigned short weeks = InputNumber::readNumberInRange("Enter a number of weeks: ", 1, 1000);
    date = date.increaseDateByXWeeks(weeks, date);

    std::cout << "\nAdding " << weeks << " weeks is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}