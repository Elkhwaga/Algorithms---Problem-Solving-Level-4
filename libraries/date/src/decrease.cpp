#include "decrease.hpp"
#include "validation.hpp"

MyDate Decrease::decreaseDateByOneDay(MyDate Date)
{
    if (Validation::isFirstDayInMonth(Date))
    {
        if (Validation::isFirstMonthInYear(Date.month))
        {
            Date.month = 12;
            Date.day = 31;
            Date.year--;
        }
        else
        {
            Date.day = MyDate::numberOfDaysInMonth(Date.month, Date.year);
            Date.month--;
        }
    }
    else
    {
        Date.day--;
    }
    return Date;
}

MyDate Decrease::decreaseDateByXDays(unsigned short days, MyDate Date)
{
    for (unsigned short i = 1; i <= days; i++)
    {
        Date = decreaseDateByOneDay(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByOneWeek(MyDate Date)
{
    for (unsigned short i = 1; i <= 7; i++)
    {
        Date = decreaseDateByOneDay(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByXWeeks(unsigned short weeks, MyDate Date)
{
    for (unsigned short i = 1; i <= weeks; i++)
    {
        Date = decreaseDateByOneWeek(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByOneMonth(MyDate Date)
{
    if (Validation::isFirstMonthInYear(Date.month))
    {
        Date.month = 12;
        Date.year--;
    }
    else
        Date.month--;

    unsigned short numberOfDaysInCurrentMonth = MyDate::numberOfDaysInMonth(Date.month, Date.year);

    if (Date.day > numberOfDaysInCurrentMonth)
        Date.day = numberOfDaysInCurrentMonth;

    return Date;
}

MyDate Decrease::decreaseDateByXMonth(unsigned short months, MyDate Date)
{
    for (unsigned short i = 1; i <= months; i++)
    {
        Date = decreaseDateByOneMonth(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByOneYear(MyDate Date)
{
    Date.year--;
    return Date;
}

MyDate Decrease::decreaseDateByXYear(unsigned short years, MyDate Date)
{
    for (unsigned short i = 1; i <= years; i++)
    {
        Date = decreaseDateByOneYear(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByXYearFaster(unsigned short years, MyDate Date)
{
    Date.year -= years;
    return Date;
}

MyDate Decrease::decreaseDateByOneDecade(MyDate Date)
{
    Date.year -= 10;
    return Date;
}

MyDate Decrease::decreaseDateByXDecade(unsigned short decade, MyDate Date)
{
    for (unsigned short i = 1; i <= decade; i++)
    {
        Date = decreaseDateByOneDecade(Date);
    }
    return Date;
}

MyDate Decrease::decreaseDateByXDecadesFaster(unsigned short decade, MyDate Date)
{
    Date.year -= (decade * 10);
    return Date;
}

MyDate Decrease::decreaseDateByOneCentury(MyDate Date)
{
    Date.year -= 100;
    return Date;
}

MyDate Decrease::decreaseDateByOneMillennium(MyDate Date)
{
    Date.year -= 1000;
    return Date;
}