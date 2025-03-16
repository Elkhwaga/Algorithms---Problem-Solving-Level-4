#include "check.hpp"

namespace Check
{
    bool isLeapYear(unsigned short year)
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    bool isNumberInRange(unsigned short number, unsigned short min, unsigned short max)
    {
        return number >= min && number <= max;
    }
}
