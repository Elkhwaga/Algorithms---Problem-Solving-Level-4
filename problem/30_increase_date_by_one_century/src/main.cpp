#include "ReadDate.hpp"
#include "increase.hpp"
#include <iostream>

int main()
{
    MyDate Date = ReadDate::readFullDate();
    Date = Increase::increaseDateByOneCentury(Date);

    std::cout << "\nAdding one century is: "
              << Date.day << "/" << Date.month << "/" << Date.year << std::endl;

    return 0;
}