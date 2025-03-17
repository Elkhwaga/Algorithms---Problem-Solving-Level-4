#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date1 = date1.readFullDate();
    MyDate date2 = date2.readFullDate();

    std::cout << "\nCompare Result = "
              << static_cast<short>(MyDate::compareDate(date1, date2)) << std::endl;

    return 0;
}