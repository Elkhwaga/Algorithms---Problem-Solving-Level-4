#include "date.hpp"
#include "ReadDate.hpp"
#include <iostream>

int main()
{
    MyDate Date1 = ReadDate::readFullDate();
    MyDate Date2 = ReadDate::readFullDate();

    std::cout << "\nDifference is: " << MyDate::getDifferenceInDays(Date1, Date2) << " Day(s)" << std::endl;

    std::cout << "\nDifference (Including End Day) is: " << MyDate::getDifferenceInDays(Date1, Date2, true) << " Day(s)" << std::endl;

    return 0;
}