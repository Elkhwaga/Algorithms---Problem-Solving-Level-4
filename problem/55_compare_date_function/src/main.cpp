#include "ReadDate.hpp"
#include "compare.hpp"
#include <iostream>

int main()
{
    MyDate Date1 = ReadDate::readFullDate();
    MyDate Date2 = ReadDate::readFullDate();

    std::cout << "\nCompare Result = "
              << static_cast<short>(Compare::compareDate(Date1, Date2)) << std::endl;

    return 0;
}