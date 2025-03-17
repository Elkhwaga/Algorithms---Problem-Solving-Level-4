#include "ReadDate.hpp"
#include "compare.hpp"
#include <iostream>

int main()
{
    MyDate date1 = ReadDate::readFullDate();
    MyDate date2 = ReadDate::readFullDate();

    (Compare::isDate1BeforeDate2(date1, date2))
        ? std::cout << "\nYes, Date1 is less than Date2." << std::endl
        : std::cout << "\nNo,Date1 is not less than date2." << std::endl;

    return 0;
}