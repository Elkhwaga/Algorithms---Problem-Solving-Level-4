#ifndef PERIOD_HPP
#define PERIOD_HPP

#include "date.hpp"
#include <string>

struct Period
{
    MyDate start;
    MyDate end;

    Period readPeriod();

    static bool IsOverlapPeriod(Period Period1, Period Period2);

    static bool isDateInPeriod(MyDate Date, Period Period);

    static unsigned int periodLengthInDays(Period Period, bool includeEndDate = false);
};

#endif