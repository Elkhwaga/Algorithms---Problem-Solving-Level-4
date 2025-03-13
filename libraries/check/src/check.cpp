#include "check.hpp"

namespace Check
{
    bool isLeapYear(short year)
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    bool isNumberInRange(short number, short min, short max)
    {
        return number >= min && number <= max;
    }
}
