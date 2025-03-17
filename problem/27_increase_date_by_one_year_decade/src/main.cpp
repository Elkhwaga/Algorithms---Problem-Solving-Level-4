#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneDecade(date);

    std::cout << "\nAdding one decade is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}