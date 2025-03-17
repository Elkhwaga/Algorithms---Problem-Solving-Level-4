#ifndef WORK_HPP
#define WORK_HPP

#include "date.hpp"

namespace Work
{
    bool isEndOfWeek(MyDate Date);

    bool isWeekEnd(MyDate Date);

    bool isBusinessDay(MyDate Date);

    MyDate calculateVacationDays(MyDate DateOfVacationStart, unsigned short vacationDays);

    unsigned short daysUtilTheEndOfWeek(MyDate Date);

    unsigned short daysUtilTheEndOfMonth(MyDate Date);

    unsigned short daysUtilTheEndOfYear(MyDate Date);

    unsigned short calculateVacationDays(MyDate DateOfVacationStart, MyDate DateOfVacationEnd);
}

#endif