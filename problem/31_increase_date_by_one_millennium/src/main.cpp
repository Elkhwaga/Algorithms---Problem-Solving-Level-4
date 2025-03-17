#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Increase::increaseDateByOneMillennium(Date);

    std::cout << "\nAdding one millennium is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}