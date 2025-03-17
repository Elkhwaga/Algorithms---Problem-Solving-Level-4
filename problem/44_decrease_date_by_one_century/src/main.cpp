#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.decreaseDateByOneCentury(date);

    std::cout << "\nSubtracting one century is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}