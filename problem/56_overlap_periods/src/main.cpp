#include "period.hpp"
#include <iostream>

int main()
{
    std::cout << "Enter period 1: " << std::endl;
    Period Period1 = Period1.readPeriod();

    std::cout << "Enter period 2: " << std::endl;
    Period Period2 = Period2.readPeriod();

    (Period::IsOverlapPeriod(Period1, Period2))
        ? std::cout << "\nYes, Periods Overlap" << std::endl
        : std::cout << "\nNo, Periods do not Overlap" << std::endl;

    return 0;
}