#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneYear(date);

    std::cout << "\nAfter adding one year is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}