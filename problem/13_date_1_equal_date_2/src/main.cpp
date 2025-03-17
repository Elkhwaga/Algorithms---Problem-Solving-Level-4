#include "ReadDate.hpp"
#include "compare.hpp"
#include <iostream>

int main()
{
    MyDate date1 = ReadDate::readFullDate();
    MyDate date2 = ReadDate::readFullDate();

    (Compare::isDate1EqualDate2(date1, date2))
        ? std::cout << "\nYes, Date1 equal Date2." << std::endl
        : std::cout << "\nNo,Date1 is not equal date2." << std::endl;

    return 0;
}