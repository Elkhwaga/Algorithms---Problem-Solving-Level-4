#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date1 = date1.readFullDate();
    MyDate date2 = date2.readFullDate();

    (MyDate::IsDate1AfterDate2(date1, date2))
        ? std::cout << "\nYes, Date1 is after Date2." << std::endl
        : std::cout << "\nNo,Date1 is not after date2." << std::endl;

    return 0;
}