#include <iostream>
#include "date.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneMonth(date);

    std::cout << "\nAfter adding one month is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}