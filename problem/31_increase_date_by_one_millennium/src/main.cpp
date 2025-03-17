#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneMillennium(date);

    std::cout << "\nAdding one millennium is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}