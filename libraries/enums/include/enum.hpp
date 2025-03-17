#ifndef ENUM_HPP
#define ENUM_HPP

enum class LeapYearType
{
    NOT_LEAP_YEAR,
    LEAP_YEAR
};

enum class DateType
{
    MONTH = 12,
    WEEK = 7,
    HOUR = 24,
    MINUTE = 60,
    SECOND = 60
};

enum class DateCompare
{
    BEFORE = -1,
    EQUAL = 0,
    AFTER = 1
};

#endif