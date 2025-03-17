#include "period.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter period 1: " << std::endl;
    Period Period1 = Period1.readPeriod();

    std::cout << "\nPeriod Length is: " << Period::periodLengthInDays(Period1) << std::endl;

    std::cout << "\nPeriod Length (includeing end date) is:" << Period::periodLengthInDays(Period1, true) << std::endl;

    return 0;
}