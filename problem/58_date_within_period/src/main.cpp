#include "period.hpp"
#include "ReadDate.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter period:\n"
              << std::endl;
    Period Period1 = Period1.readPeriod();

    std::cout << "\nEnter date:\n"
              << std::endl;
    MyDate Date = ReadDate::readFullDate();

    if (Period::isDateInPeriod(Date, Period1))
        std::cout << "\nYes, Date is in period." << std::endl;
    else
        std::cout << "\nNo, Date is not in period." << std::endl;

    return 0;
}