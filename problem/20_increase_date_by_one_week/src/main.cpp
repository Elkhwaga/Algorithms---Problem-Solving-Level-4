#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneWeek(date);

    std::cout << "\nAfter adding one week is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}