#pragma warning(disable : 4996)

#include "date.hpp"
#include "increase.hpp"
#include "compare.hpp"
#include "utils.hpp"
#include "check.hpp"
#include "enum.hpp"
#include <iostream>
#include <ctime>

MyDate MyDate::getSystemDate()
{
    time_t t = time(0);
    std::tm *now = localtime(&t);

    this->year = (unsigned short)(now->tm_year + 1900);
    this->month = (unsigned short)(now->tm_mon + 1);
    this->day = (unsigned short)(now->tm_mday);

    return *this;
}

unsigned short MyDate::numberOfDaysInYear(unsigned short year)
{
    return Check::isLeapYear(year) ? 366 : 365;
}

unsigned short MyDate::numberOfHoursInYear(unsigned short year)
{
    return numberOfDaysInYear(year) * static_cast<unsigned short>(DateType::HOUR);
}

unsigned int MyDate::numberOfMinutesInYear(unsigned short year)
{
    return numberOfHoursInYear(year) * static_cast<unsigned short>(DateType::MINUTE);
}

unsigned int MyDate::numberOfSecondsInYear(unsigned short year)
{
    return numberOfMinutesInYear(year) * static_cast<unsigned short>(DateType::SECOND);
}

/*
unsigned short numberOfDaysInMonth(unsigned short month, unsigned short year)
{
    if (!Check::isNumberInRange(month, 1, 12))
        return 0;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return Check::isLeapYear(year) ? 29 : 28;
    }

    return 0;
}
*/

unsigned short MyDate::numberOfDaysInMonth(unsigned short month, unsigned short year)
{
    if (!Check::isNumberInRange(month, 1, 12))
        return 0;

    unsigned short daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (Check::isLeapYear(year) ? 29 : 28) : daysInMonth[month - 1];
}

unsigned short MyDate::numberOfHoursInMonth(unsigned short month, unsigned short year)
{
    return numberOfDaysInMonth(month, year) * static_cast<unsigned short>(DateType::HOUR);
}

unsigned int MyDate::numberOfMinutesInMonth(unsigned short month, unsigned short year)
{
    return numberOfHoursInMonth(month, year) * static_cast<unsigned short>(DateType::MINUTE);
}

unsigned int MyDate::numberOfSecondsInMonth(unsigned short month, unsigned short year)
{
    return numberOfMinutesInMonth(month, year) * static_cast<unsigned short>(DateType::SECOND);
}

unsigned short MyDate::dayOfWeekOrder(unsigned short day, unsigned short month, unsigned short year)
{
    unsigned short A, Y, M;
    A = (14 - month) / 12;
    Y = year - A;
    M = month + (12 * A) - 2;

    return (day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
}

unsigned short MyDate::dayOfWeekOrder(MyDate Date)
{
    return dayOfWeekOrder(Date.day, Date.month, Date.year);
}

std::string MyDate::dayShortName(unsigned short dayOfWeekOrder)
{
    std::string arrDayNames[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return arrDayNames[dayOfWeekOrder];
}
std::string MyDate::monthShortName(unsigned short monthNumber)
{
    std::string months[12] = {"Jan", "Feb", "Mar",
                              "Apr", "May", "Jun",
                              "Jul", "Aug", "Sep",
                              "Oct", "Nov", "Dec"};
    return (months[monthNumber - 1]);
}

unsigned short MyDate::numberOfDaysFromBeginningOfTheYear(unsigned short day, unsigned short month, unsigned short year)
{
    unsigned short totalDays = 0;
    for (unsigned short i = 1; i <= month - 1; i++)
    {
        totalDays += numberOfDaysInMonth(i, year);
    }
    return totalDays += day;
}

unsigned int MyDate::getDifferenceInDays(MyDate Date1, MyDate Date2, bool includeEnfDay)
{
    unsigned int days = 0;
    short swapFlag = 1;

    if (Compare::isDate1EqualDate2(Date1, Date2))
        return includeEnfDay ? 1 : 0;

    if (!Compare::isDate1BeforeDate2(Date1, Date2))
    {
        MyDate::swapDate(Date1, Date2);
        swapFlag = -1;
    }

    while (Compare::isDate1BeforeDate2(Date1, Date2))
    {
        days++;
        Date1 = Increase::increaseDateByOneDay(Date1);
    }

    return includeEnfDay ? ++days * swapFlag : days * swapFlag;
}

MyDate MyDate::getDateFromDayOrderInYear(unsigned short dayOrderInYear, unsigned short year)
{
    unsigned short remainingDays = dayOrderInYear;
    unsigned short monthDays = 0;

    this->year = year;
    this->month = 1;

    while (true)
    {
        monthDays = this->numberOfDaysInMonth(this->month, year);

        if (remainingDays > monthDays)
        {
            remainingDays -= monthDays;
            this->month++;
        }
        else
        {
            this->day = remainingDays;
            break;
        }
    }
    return *this;
}

MyDate MyDate::dateAddDays(unsigned short days)
{
    unsigned short remainingDays = days + this->numberOfDaysFromBeginningOfTheYear(this->day, this->month, this->day);
    unsigned short monthDays = 0;
    this->month = 1;

    while (true)
    {
        monthDays = this->numberOfDaysInMonth(this->month, this->year);
        if (remainingDays > monthDays)
        {
            remainingDays -= monthDays;
            this->month++;
            if (this->month > 12)
            {
                this->month = 1;
                this->year++;
            }
        }
        else
        {
            this->day = remainingDays;
            break;
        }
    }

    return *this;
}

void MyDate::swapDate(MyDate &Date1, MyDate &Date2)
{
    MyDate Temp;
    Temp.day = Date1.day;
    Temp.month = Date1.month;
    Temp.year = Date1.year;

    Date1.day = Date2.day;
    Date1.month = Date2.month;
    Date1.year = Date2.year;

    Date2.day = Temp.day;
    Date2.month = Temp.month;
    Date2.year = Temp.year;
}