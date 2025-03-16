#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date1 = date1.readFullDate();
    MyDate date2 = date2.readFullDate();

    (MyDate::IsDate1EqualDate2(date1, date2))
        ? std::cout << "\nYes, Date1 equal Date2." << std::endl
        : std::cout << "\nNo,Date1 is not equal date2." << std::endl;

    return 0;
}