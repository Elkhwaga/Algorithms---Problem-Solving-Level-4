#include "period.hpp"
#include "enum.hpp"

Period Period::readPeriod()
{
    this->start.readFullDate();
    this->end.readFullDate();
    return *this;
}

bool Period::IsOverlapPeriod(Period Period1, Period Period2)
{
    return (
        (MyDate::compareDate(Period2.end, Period1.start) == DateCompare::BEFORE) ||
        (MyDate::compareDate(Period2.start, Period1.end) == DateCompare::AFTER));
}
