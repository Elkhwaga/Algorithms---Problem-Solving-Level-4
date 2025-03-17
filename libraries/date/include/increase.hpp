#ifndef INCREASE_HPP
#define INCREASE_HPP

#include "date.hpp"

namespace Increase
{
    MyDate increaseDateByOneDay(MyDate Date);

    MyDate increaseDateByXDays(unsigned short days, MyDate Date);

    MyDate increaseDateByOneWeek(MyDate Date);

    MyDate increaseDateByXWeeks(unsigned short weeks, MyDate Date);

    MyDate increaseDateByOneMonth(MyDate Date);

    MyDate increaseDateByXMonth(unsigned short months, MyDate Date);

    MyDate increaseDateByOneYear(MyDate Date);

    MyDate increaseDateByXYear(unsigned short years, MyDate Date);

    MyDate increaseDateByXYearFaster(unsigned short years, MyDate Date);

    MyDate increaseDateByOneDecade(MyDate Date);

    MyDate increaseDateByXDecade(unsigned short decade, MyDate Date);

    MyDate increaseDateByXDecadesFaster(unsigned short decade, MyDate Date);

    MyDate increaseDateByOneCentury(MyDate Date);

    MyDate increaseDateByOneMillennium(MyDate Date);
}

#endif