#include "work.hpp"
#include "increase.hpp"
#include "decrease.hpp"
#include "compare.hpp"

bool Work::isEndOfWeek(MyDate Date)
{
    return MyDate::dayOfWeekOrder(Date) == 6;
}

bool Work::isWeekEnd(MyDate Date)
{
    unsigned short day = MyDate::dayOfWeekOrder(Date);
    return (day == 5 || day == 6);
}

bool Work::isBusinessDay(MyDate Date)
{
    return !isWeekEnd(Date);
}

MyDate Work::calculateVacationDays(MyDate DateOfVacationStart, unsigned short vacationDays)
{
    short weekEnds = 0;

    while (isWeekEnd(DateOfVacationStart))
    {
        DateOfVacationStart = Increase::increaseDateByOneDay(DateOfVacationStart);
    }

    for (unsigned short i = 0; i < vacationDays + weekEnds; i++)
    {
        if (isWeekEnd(DateOfVacationStart))
            weekEnds++;

        DateOfVacationStart = Increase::increaseDateByOneDay(DateOfVacationStart);
    }

    while (isWeekEnd(DateOfVacationStart))
    {
        DateOfVacationStart = Decrease::decreaseDateByOneDay(DateOfVacationStart);
    }

    return DateOfVacationStart;
}

unsigned short Work::calculateVacationDays(MyDate DateOfVacationStart, MyDate DateOfVacationEnd)
{
    unsigned short days = 0;

    while (Compare::isDate1BeforeDate2(DateOfVacationStart, DateOfVacationEnd))
    {
        if (isBusinessDay(DateOfVacationStart))
            days++;

        DateOfVacationStart = Increase::increaseDateByOneDay(DateOfVacationStart);
    }

    return days;
}

unsigned short Work::daysUtilTheEndOfWeek(MyDate Date)
{
    return 6 - MyDate::dayOfWeekOrder(Date);
}

unsigned short Work::daysUtilTheEndOfMonth(MyDate Date)
{
    MyDate EndOfMonthDate;
    EndOfMonthDate.day = MyDate::numberOfDaysInMonth(Date.month, Date.year);
    EndOfMonthDate.month = Date.month;
    EndOfMonthDate.year = Date.year;

    return MyDate::getDifferenceInDays(Date, EndOfMonthDate, true);
}

unsigned short Work::daysUtilTheEndOfYear(MyDate Date)
{
    MyDate EndOfYearDate;
    EndOfYearDate.day = 31;
    EndOfYearDate.month = 12;
    EndOfYearDate.year = Date.year;

    return MyDate::getDifferenceInDays(Date, EndOfYearDate, true);
}