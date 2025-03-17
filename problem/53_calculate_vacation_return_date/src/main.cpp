#include "ReadDate.hpp"
#include "work.hpp"
#include "InputNumber.hpp"
#include <iostream>

int main()
{
    std::cout << "Vacation Start Date: " << std::endl;
    MyDate DateOfVacationStart = ReadDate::readFullDate();

    unsigned short vacationDays = InputNumber::readNumberInRange("Enter a number of vacation days: ", 1, 50);

    MyDate ReturnDate = Work::calculateVacationDays(DateOfVacationStart, vacationDays);

    std::cout << "Return Date: " << ReturnDate.day << "/" << ReturnDate.month << "/" << ReturnDate.year << std::endl;

    return 0;
}