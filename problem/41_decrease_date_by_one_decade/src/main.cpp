#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.decreaseDateByOneDecade(date);

    std::cout << "\nSubtracting one decade is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}