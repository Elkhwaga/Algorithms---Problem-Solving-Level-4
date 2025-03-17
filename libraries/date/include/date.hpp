#ifndef MYDATE_H
#define MYDATE_H

#include <string>

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

    static std::string dayShortName(unsigned short dayOfWeekOrder);

    static std::string monthShortName(unsigned short monthNumber);

    static unsigned short numberOfDaysFromBeginningOfTheYear(unsigned short day, unsigned short month, unsigned short year);

    static unsigned int getdifferenceInDays(MyDate Date1, MyDate Date2, bool includeEnfDay = false);

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

    static bool IsDate1BeforeDate2(MyDate Date1, MyDate Date2);

    static bool IsDate1EqualDate2(MyDate Date1, MyDate Date2);

    static bool isValidDate(MyDate Date);

    static bool isLastDayInMonth(MyDate Date);

    static bool isLastMonthInYear(unsigned short month);

    static void swapDate(MyDate &Date1, MyDate &Date2);

    static void printMonthCalendar(unsigned short month, unsigned short year);

    static void printYearCalendar(unsigned short year);
};

#endif