#ifndef MYDATE_H
#define MYDATE_H

#include <string>
#include "enums.hpp"

struct MyDate
{
    unsigned short day;
    unsigned short month;
    unsigned short year;

    static std::string readYear();

    static std::string readMonth();

    static std::string readDayInWeek();

    static std::string readDayInMonth();

    static unsigned short numberOfDaysInYear(unsigned short year);

    static unsigned short numberOfHoursInYear(unsigned short year);

    static unsigned int numberOfMinutesInYear(unsigned short year);

    static unsigned int numberOfSecondsInYear(unsigned short year);

    static unsigned short numberOfDaysInMonth(unsigned short month, unsigned short year);

    static unsigned short numberOfHoursInMonth(unsigned short month, unsigned short year);

    static unsigned int numberOfMinutesInMonth(unsigned short month, unsigned short year);

    static unsigned int numberOfSecondsInMonth(unsigned short month, unsigned short year);

    static unsigned short dayOfWeekOrder(unsigned short day, unsigned short month, unsigned short year);

    static unsigned short dayOfWeekOrder(MyDate Date);

    static std::string dayShortName(unsigned short dayOfWeekOrder);

    static std::string monthShortName(unsigned short monthNumber);

    static unsigned short numberOfDaysFromBeginningOfTheYear(unsigned short day, unsigned short month, unsigned short year);

    static unsigned int getdifferenceInDays(MyDate Date1, MyDate Date2, bool includeEnfDay = false);

    static unsigned short daysUtilTheEndOfWeek(MyDate Date);

    static unsigned short daysUtilTheEndOfMonth(MyDate Date);

    static unsigned short daysUtilTheEndOfYear(MyDate Date);

    static unsigned short calculateVacationDays(MyDate DateOfVacationStart, MyDate DateOfVacationEnd);

    MyDate getDateFromDayOrderInYear(unsigned short dayOrderInYear, unsigned short year);

    MyDate readFullDate();

    MyDate dateAddDays(unsigned short days);

    MyDate getSystemDate();

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

    MyDate calculateVacationDays(MyDate DateOfVacationStart, unsigned short vacationDays);

    static bool IsDate1BeforeDate2(MyDate Date1, MyDate Date2);

    static bool IsDate1AfterDate2(MyDate Date1, MyDate Date2);

    static bool IsDate1EqualDate2(MyDate Date1, MyDate Date2);

    static bool isValidDate(MyDate Date);

    static bool isFirstDayInMonth(MyDate Date);

    static bool isLastDayInMonth(MyDate Date);

    static bool isFirstMonthInYear(unsigned short month);

    static bool isLastMonthInYear(unsigned short month);

    static bool isEndOfWeek(MyDate Date);

    static bool isWeekEnd(MyDate Date);

    static bool isBusinessDay(MyDate Date);

    static void swapDate(MyDate &Date1, MyDate &Date2);

    static void printMonthCalendar(unsigned short month, unsigned short year);

    static void printYearCalendar(unsigned short year);

    static DateCompare compareDate(MyDate Date1, MyDate Date2);
};

#endif