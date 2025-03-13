#include "enums.hpp"

namespace Enums
{
    LeapYearType isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? LeapYearType::LEAP_YEAR : LeapYearType::NOT_LEAP_YEAR;
    }
}
