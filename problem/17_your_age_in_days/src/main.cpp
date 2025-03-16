
#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date1 = Date1.readFullDate();
    MyDate Date2 = Date2.getSystemDate();

    std::cout << "Day: " << Date2.day << std::endl;
    std::cout << "month: " << Date2.month << std::endl;
    std::cout << "year: " << Date2.year << std::endl;

    std::cout << "\nYour Age is: " << MyDate::getdifferenceInDays(Date1, Date2, true) << " Day(s)" << std::endl;

    return 0;
}