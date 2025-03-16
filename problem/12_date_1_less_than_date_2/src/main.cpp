#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date1 = date1.readFullDate();
    MyDate date2 = date2.readFullDate();

    (MyDate::IsDate1BeforeDate2(date1, date2))
        ? std::cout << "\nYes, Date1 is less than Date2." << std::endl
        : std::cout << "\nNo,Date1 is not less than date2." << std::endl;

    return 0;
}