#include "increase.hpp"
#include "validation.hpp"

MyDate Increase::increaseDateByOneDay(MyDate Date)
{
    if (Validation::isLastDayInMonth(Date))
    {
        if (Validation::isLastMonthInYear(Date.month))
        {
            Date.month = 1;
            Date.day = 1;
            Date.year++;
        }
        else
        {
            Date.day = 1;
            Date.month++;
        }
    }
    else
    {
        Date.day++;
    }

    return Date;
}

MyDate Increase::increaseDateByXDays(unsigned short days, MyDate Date)
{
    for (unsigned short i = 1; i <= days; i++)
    {
        Date = increaseDateByOneDay(Date);
    }

    return Date;
}

MyDate Increase::increaseDateByOneWeek(MyDate Date)
{
    for (unsigned short i = 1; i <= 7; i++)
    {
        Date = increaseDateByOneDay(Date);
    }
    return Date;
}

MyDate Increase::increaseDateByXWeeks(unsigned short weeks, MyDate Date)
{
    for (unsigned short i = 1; i <= weeks; i++)
    {
        Date = increaseDateByOneWeek(Date);
    }
    return Date;
}

MyDate Increase::increaseDateByOneMonth(MyDate Date)
{
    if (Validation::isLastMonthInYear(Date.month))
    {
        Date.month = 1;
        Date.year++;
    }
    else
        Date.month++;

    unsigned short numberOfDaysInCurrentMonth = MyDate::numberOfDaysInMonth(Date.month, Date.year);

    if (Date.day > numberOfDaysInCurrentMonth)
        Date.day = numberOfDaysInCurrentMonth;

    return Date;
}

MyDate Increase::increaseDateByXMonth(unsigned short months, MyDate Date)
{
    for (unsigned short i = 1; i <= months; i++)
    {
        Date = increaseDateByOneMonth(Date);
    }
    return Date;
}

MyDate Increase::increaseDateByOneYear(MyDate Date)
{
    Date.year++;
    return Date;
}

MyDate Increase::increaseDateByXYear(unsigned short years, MyDate Date)
{
    for (unsigned short i = 1; i <= years; i++)
    {
        Date = increaseDateByOneYear(Date);
    }
    return Date;
}

MyDate Increase::increaseDateByXYearFaster(unsigned short years, MyDate Date)
{
    Date.year += years;
    return Date;
}

MyDate Increase::increaseDateByOneDecade(MyDate Date)
{
    Date.year += 10;
    return Date;
}

MyDate Increase::increaseDateByXDecade(unsigned short decade, MyDate Date)
{
    for (unsigned short i = 1; i <= decade; i++)
    {
        Date = increaseDateByOneDecade(Date);
    }
    return Date;
}

MyDate Increase::increaseDateByXDecadesFaster(unsigned short decade, MyDate Date)
{
    Date.year += (decade * 10);
    return Date;
}

MyDate Increase::increaseDateByOneCentury(MyDate Date)
{
    Date.year += 100;
    return Date;
}

MyDate Increase::increaseDateByOneMillennium(MyDate Date)
{
    Date.year += 1000;
    return Date;
}