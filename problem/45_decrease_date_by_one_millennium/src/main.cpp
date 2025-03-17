#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.decreaseDateByOneMillennium(date);

    std::cout << "\nSubtracting one millennium is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}