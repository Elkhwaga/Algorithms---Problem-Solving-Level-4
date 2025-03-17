#ifndef VALIDATION_HPP
#define VALIDATION_HPP

#include "date.hpp"

namespace Validation
{
    bool isValidDate(MyDate Date);

    bool isFirstDayInMonth(MyDate Date);

    bool isLastDayInMonth(MyDate Date);

    bool isFirstMonthInYear(unsigned short month);

    bool isLastMonthInYear(unsigned short month);
}

#endif