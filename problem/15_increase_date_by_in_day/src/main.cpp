#include <iostream>
#include "date.hpp"

int main()
{
    MyDate Date1 = Date1.readFullDate();

    Date1 = Date1.increaseDateByOneDay(Date1);

    std::cout << "\nDate after adding on day is: "
              << Date1.day << "/" << Date1.month << "/" << Date1.year << std::endl;

    return 0;
}