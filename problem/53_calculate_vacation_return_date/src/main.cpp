#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    std::cout << "Vacation Start Date: " << std::endl;
    MyDate DateOfVacationStart = DateOfVacationStart.readFullDate();

    unsigned short vacationDays = InputNumber::readNumberInRange("Enter a number of vacation days: ", 1, 50);

    MyDate ReturnDate = ReturnDate.calculateVacationDays(DateOfVacationStart, vacationDays);

    std::cout << "Return Date: " << ReturnDate.day << "/" << ReturnDate.month << "/" << ReturnDate.year << std::endl;

    return 0;
}