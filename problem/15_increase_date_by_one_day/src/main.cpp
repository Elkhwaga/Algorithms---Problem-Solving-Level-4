#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();

    Date = Increase::increaseDateByOneDay(Date);

    std::cout << "\nDate after adding on day is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}