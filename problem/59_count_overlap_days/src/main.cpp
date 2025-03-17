#include "period.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter period 1:\n"
              << std::endl;
    Period Period1 = Period1.readPeriod();

    std::cout << "Enter period 2:\n"
              << std::endl;
    Period Period2 = Period2.readPeriod();

    std::cout << "\nOverlap days: " << Period::countOverlapDays(Period1, Period2) << " Day(s)" << std::endl;

    return 0;
}