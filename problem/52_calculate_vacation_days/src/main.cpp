#include <iostream>
#include "date.hpp"

int main()
{
    ;
    std::cout << "Vacation Start Date: " << std::endl;
    MyDate DateOfVacationStart = DateOfVacationStart.readFullDate();

    std::cout << "Vacation End Date: " << std::endl;
    MyDate DateOfVacationEnd = DateOfVacationEnd.readFullDate();

    std::cout << "Vacation Start Date: "
              << MyDate::dayShortName(MyDate::dayOfWeekOrder(DateOfVacationStart))
              << " , " << DateOfVacationStart.day << "/" << DateOfVacationStart.month << "/" << DateOfVacationStart.year
              << std::endl;

    std::cout << "Vacation End Date: "
              << MyDate::dayShortName(MyDate::dayOfWeekOrder(DateOfVacationEnd))
              << " , " << DateOfVacationEnd.day << "/" << DateOfVacationEnd.month << "/" << DateOfVacationEnd.year
              << std::endl;

    std::cout << "\nVacation days is: " << MyDate::calculateVacationDays(DateOfVacationStart, DateOfVacationEnd) << std::endl;

    return 0;
}