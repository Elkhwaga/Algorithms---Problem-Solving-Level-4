#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.decreaseDateByOneYear(date);

    std::cout << "\nAfter Subtracting one year is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}