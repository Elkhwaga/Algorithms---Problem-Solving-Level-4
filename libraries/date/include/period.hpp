#ifndef PERIOD_H
#define PERIOD_H

#include "date.hpp"
#include <string>

struct Period
{
    MyDate start;
    MyDate end;

    Period readPeriod();

    static bool IsOverlapPeriod(Period Period1, Period Period2);
};

#endif