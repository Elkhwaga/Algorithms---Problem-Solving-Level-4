#include "../include/check.hpp"

namespace Check
{
    Enums::LeapYearType isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? Enums::LeapYearType::LEAP_YEAR : Enums::LeapYearType::NOT_LEAP_YEAR;
    }
}
