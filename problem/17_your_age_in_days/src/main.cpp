#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

int main()
{
    MyDate Date1 = ReadDate::readFullDate();
    MyDate Date2 = Date2.getSystemDate();

    std::cout << "Day: " << Date2.day << std::endl;
    std::cout << "month: " << Date2.month << std::endl;
    std::cout << "year: " << Date2.year << std::endl;

    std::cout << "\nYour Age is: " << MyDate::getDifferenceInDays(Date1, Date2, true) << " Day(s)" << std::endl;

    return 0;
}