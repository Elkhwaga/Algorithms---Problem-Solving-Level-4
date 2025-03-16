#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date1 = Date1.readFullDate();
    MyDate Date2 = Date2.readFullDate();

    std::cout << "\nDifference is: " << MyDate::getdifferenceInDays(Date1, Date2) << " Day(s)" << std::endl;

    std::cout << "\nDifference (Including End Day) is: " << MyDate::getdifferenceInDays(Date1, Date2, true) << " Day(s)" << std::endl;

    return 0;
}