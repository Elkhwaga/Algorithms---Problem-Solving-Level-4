#include <iostream>
#include "period.hpp"
#include "ReadDate.hpp"
#include "compare.hpp"
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
    return (
        (Compare::compareDate(Period2.end, Period1.start) == DateCompare::BEFORE) ||
        (Compare::compareDate(Period2.start, Period1.end) == DateCompare::AFTER));
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
