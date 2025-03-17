#include "ReadDate.hpp"
#include "compare.hpp"
#include <iostream>

int main()
{
    MyDate Date1 = ReadDate::readFullDate();
    MyDate Date2 = ReadDate::readFullDate();

    (Compare::isDate1AfterDate2(Date1, Date2))
        ? std::cout << "\nYes, Date1 is after Date2." << std::endl
        : std::cout << "\nNo,Date1 is not after date2." << std::endl;

    return 0;
}