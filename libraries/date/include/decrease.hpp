#ifndef DECREASE_HPP
#define DECREASE_HPP

#include "date.hpp"

namespace Decrease
{
    MyDate decreaseDateByOneDay(MyDate Date);

    MyDate decreaseDateByXDays(unsigned short days, MyDate Date);

    MyDate decreaseDateByOneWeek(MyDate Date);

    MyDate decreaseDateByXWeeks(unsigned short weeks, MyDate Date);

    MyDate decreaseDateByOneMonth(MyDate Date);

    MyDate decreaseDateByXMonth(unsigned short months, MyDate Date);

    MyDate decreaseDateByOneYear(MyDate Date);

    MyDate decreaseDateByXYear(unsigned short years, MyDate Date);

    MyDate decreaseDateByXYearFaster(unsigned short years, MyDate Date);

    MyDate decreaseDateByOneDecade(MyDate Date);

    MyDate decreaseDateByXDecade(unsigned short decade, MyDate Date);

    MyDate decreaseDateByXDecadesFaster(unsigned short decade, MyDate Date);

    MyDate decreaseDateByOneCentury(MyDate Date);

    MyDate decreaseDateByOneMillennium(MyDate Date);
}

#endif