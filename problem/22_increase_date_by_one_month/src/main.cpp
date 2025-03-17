#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Increase::increaseDateByOneMonth(Date);

    std::cout << "\nAfter adding one month is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}