#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Increase::increaseDateByOneYear(Date);

    std::cout << "\nAfter adding one year is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}