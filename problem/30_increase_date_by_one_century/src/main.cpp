#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

int main()
{
    MyDate date = date.readFullDate();
    date = date.increaseDateByOneCentury(date);

    std::cout << "\nAdding one century is: "
              << date.day << "/" << date.month << "/" << date.year << std::endl;

    return 0;
}