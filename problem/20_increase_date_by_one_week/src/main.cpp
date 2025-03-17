#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Increase::increaseDateByOneWeek(Date);

    std::cout << "\nAfter adding one week is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}