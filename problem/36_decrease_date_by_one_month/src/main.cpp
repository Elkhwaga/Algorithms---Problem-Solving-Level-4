#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.decreaseDateByOneMonth(date);

    std::cout << "\nAfter Subtracting one month is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}