#include <iostream>
#include "date.hpp"
#include "InputNumber.hpp"

void printResult()
{
    MyDate date;
    date = date.readFullDate();
    unsigned short days = InputNumber::readNumberInRange("How many days to add: ", 1, 10000);
    date = date.dateAddDays(days);

    std::cout << "\nDate after adding [" << days << "] days is: " << date.day << "/" << date.month << "/" << date.year << std::endl;
}

int main()
{
    printResult();

    return 0;
}