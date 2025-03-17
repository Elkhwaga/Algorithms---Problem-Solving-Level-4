#include <iostream>
#include "period.hpp"
#include "ReadDate.hpp"
#include "compare.hpp"
#include "increase.hpp"
#include "enum.hpp"

Period Period::readPeriod()
{
    std::cout << "Enter start date\n"
              << std::endl;
    this->start = ReadDate::readFullDate();

    std::cout << "Enter end date\n"
              << std::endl;
    this->end = ReadDate::readFullDate();

    return *this;
}

bool Period::IsOverlapPeriod(Period Period1, Period Period2)
{
    if ((Compare::compareDate(Period2.end, Period1.start) == DateCompare::BEFORE) ||
        (Compare::compareDate(Period2.start, Period1.end) == DateCompare::AFTER))
        return false;

    return true;
}

bool Period::isDateInPeriod(MyDate Date, Period Period)
{
    return !(
        (Compare::compareDate(Date, Period.start) == DateCompare::BEFORE) ||
        (Compare::compareDate(Date, Period.end) == DateCompare::AFTER));
}

unsigned int Period::periodLengthInDays(Period Period, bool includeEndDate)
{
    return MyDate::getDifferenceInDays(Period.start, Period.end, includeEndDate);
}

unsigned int Period::countOverlapDays(Period Period1, Period Period2)
{
    unsigned int period1Length = periodLengthInDays(Period1, true);
    unsigned int period2Length = periodLengthInDays(Period2, true);
    unsigned overlapDays = 0;

    if (!IsOverlapPeriod(Period1, Period2))
        return 0;

    if (period1Length < period2Length)
    {
        while (Compare::isDate1BeforeDate2(Period1.start, Period1.end))
        {
            if (isDateInPeriod(Period1.start, Period2))
                overlapDays++;

            Period1.start = Increase::increaseDateByOneDay(Period1.start);
        }
    }
    else
    {
        while (Compare::isDate1BeforeDate2(Period2.start, Period2.end))
        {
            if (isDateInPeriod(Period2.start, Period1))
                overlapDays++;

            Period2.start = Increase::increaseDateByOneDay(Period2.start);
        }
    }

    return overlapDays;
}
