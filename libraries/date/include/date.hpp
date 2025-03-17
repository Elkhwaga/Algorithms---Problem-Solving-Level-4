#ifndef MYDATE_HPP
#define MYDATE_HPP

#include <string>

struct MyDate
{
    unsigned short day;
    unsigned short month;
    unsigned short year;

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

    static unsigned int getDifferenceInDays(MyDate Date1, MyDate Date2, bool includeEnfDay = false);

    MyDate getDateFromDayOrderInYear(unsigned short dayOrderInYear, unsigned short year);

    MyDate dateAddDays(unsigned short days);

    MyDate getSystemDate();

    static void swapDate(MyDate &Date1, MyDate &Date2);
};

#endif