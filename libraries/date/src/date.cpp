#pragma warning(disable : 4996)

#include "date.hpp"
#include "utils.hpp"
#include "check.hpp"
#include "enum.hpp"
#include "InputValidation.hpp"
#include <iostream>
#include <ctime>

std::string MyDate::readYear()
{
    std::string input;
    std::cout << "Enter a year (between 1000 and 9999): ";
    std::cin >> input;
    while (!InputValidation::isValidYear(input))
    {
        std::cout << "Enter a valid year (between 1000 and 9999): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string MyDate::readMonth()
{
    std::string input;
    std::cout << "Enter a month (between 1 and 12): ";
    std::cin >> input;
    while (!InputValidation::isValidMonth(input))
    {
        std::cout << "Enter a valid month (between 1 and 12): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string MyDate::readDayInWeek()
{
    std::string input;
    std::cout << "Enter a day (between 1 and 7): ";
    std::cin >> input;
    while (!InputValidation::isValidDayInWeek(input))
    {
        std::cout << "Enter a valid day (between 1 and 7): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string MyDate::readDayInMonth()
{
    std::string input;
    std::cout << "Enter a day (between 1 and 31): ";
    std::cin >> input;
    while (!InputValidation::isValidDayInMonth(input))
    {
        std::cout << "Enter a valid day (between 1 and 31): " << std::endl;
        std::cin >> input;
    }
    return input;
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

unsigned int MyDate::getdifferenceInDays(MyDate Date1, MyDate Date2, bool includeEnfDay)
{
    unsigned int days = 0;
    short swapFlag = 1;

    if (IsDate1EqualDate2(Date1, Date2))
        return includeEnfDay ? 1 : 0;

    if (!IsDate1BeforeDate2(Date1, Date2))
    {
        MyDate::swapDate(Date1, Date2);
        swapFlag = -1;
    }

    while (IsDate1BeforeDate2(Date1, Date2))
    {
        days++;
        Date1 = Date1.increaseDateByOneDay(Date1);
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

MyDate MyDate::readFullDate()
{
    MyDate Date;
    do
    {
        Date.day = std::stoi(this->readDayInMonth());
        Date.month = std::stoi(this->readMonth());
        Date.year = std::stoi(this->readYear());
    } while (!(this->isValidDate(Date)));

    return Date;
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

MyDate MyDate::increaseDateByOneDay(MyDate Date)
{
    if (this->isLastDayInMonth(Date))
    {
        if (this->isLastMonthInYear(Date.month))
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

MyDate MyDate::increaseDateByXDays(unsigned short days, MyDate Date)
{
    for (unsigned short i = 1; i <= days; i++)
    {
        Date = this->increaseDateByOneDay(Date);
    }

    return Date;
}

MyDate MyDate::increaseDateByOneWeek(MyDate Date)
{
    for (unsigned short i = 1; i <= 7; i++)
    {
        Date = this->increaseDateByOneDay(Date);
    }
    return Date;
}

MyDate MyDate::increaseDateByXWeeks(unsigned short weeks, MyDate Date)
{
    for (unsigned short i = 1; i <= weeks; i++)
    {
        Date = this->increaseDateByOneWeek(Date);
    }
    return Date;
}

MyDate MyDate::increaseDateByOneMonth(MyDate Date)
{
    if (this->isLastMonthInYear(Date.month))
    {
        Date.month = 1;
        Date.year++;
    }
    else
        Date.month++;

    unsigned short numberOfDaysInCurrentMonth = this->numberOfDaysInMonth(Date.month, Date.year);

    if (Date.day > numberOfDaysInCurrentMonth)
        Date.day = numberOfDaysInCurrentMonth;

    return Date;
}

MyDate MyDate::increaseDateByXMonth(unsigned short months, MyDate Date)
{
    for (unsigned short i = 1; i <= months; i++)
    {
        Date = this->increaseDateByOneMonth(Date);
    }
    return Date;
}

MyDate MyDate::increaseDateByOneYear(MyDate Date)
{
    Date.year++;
    return Date;
}

MyDate MyDate::increaseDateByXYear(unsigned short years, MyDate Date)
{
    for (unsigned short i = 1; i <= years; i++)
    {
        Date = this->increaseDateByOneYear(Date);
    }
    return Date;
}

MyDate MyDate::increaseDateByXYearFaster(unsigned short years, MyDate Date)
{
    Date.year += years;
    return Date;
}

MyDate MyDate::increaseDateByOneDecade(MyDate Date)
{
    Date.year += 10;
    return Date;
}

MyDate MyDate::increaseDateByXDecade(unsigned short decade, MyDate Date)
{
    for (unsigned short i = 1; i <= decade; i++)
    {
        Date = this->increaseDateByOneDecade(Date);
    }
    return Date;
}

MyDate MyDate::increaseDateByXDecadesFaster(unsigned short decade, MyDate Date)
{
    Date.year += (decade * 10);
    return Date;
}

MyDate MyDate::increaseDateByOneCentury(MyDate Date)
{
    Date.year += 100;
    return Date;
}

MyDate MyDate::increaseDateByOneMillennium(MyDate Date)
{
    Date.year += 1000;
    return Date;
}

MyDate MyDate::decreaseDateByOneDay(MyDate Date)
{
    if (this->isFirstDayInMonth(Date))
    {
        if (this->isFirstMonthInYear(Date.month))
        {
            Date.month = 12;
            Date.day = 31;
            Date.year--;
        }
        else
        {
            Date.day = this->numberOfDaysInMonth(Date.month, Date.year);
            Date.month--;
        }
    }
    else
    {
        Date.day--;
    }
    return Date;
}

MyDate MyDate::decreaseDateByXDays(unsigned short days, MyDate Date)
{
    for (unsigned short i = 1; i <= days; i++)
    {
        Date = this->decreaseDateByOneDay(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByOneWeek(MyDate Date)
{
    for (unsigned short i = 1; i <= 7; i++)
    {
        Date = this->decreaseDateByOneDay(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByXWeeks(unsigned short weeks, MyDate Date)
{
    for (unsigned short i = 1; i <= weeks; i++)
    {
        Date = this->decreaseDateByOneWeek(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByOneMonth(MyDate Date)
{
    if (this->isFirstMonthInYear(Date.month))
    {
        Date.month = 12;
        Date.year--;
    }
    else
        Date.month--;

    unsigned short numberOfDaysInCurrentMonth = this->numberOfDaysInMonth(Date.month, Date.year);

    if (Date.day > numberOfDaysInCurrentMonth)
        Date.day = numberOfDaysInCurrentMonth;

    return Date;
}

MyDate MyDate::decreaseDateByXMonth(unsigned short months, MyDate Date)
{
    for (unsigned short i = 1; i <= months; i++)
    {
        Date = this->decreaseDateByOneMonth(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByOneYear(MyDate Date)
{
    Date.year--;
    return Date;
}

MyDate MyDate::decreaseDateByXYear(unsigned short years, MyDate Date)
{
    for (unsigned short i = 1; i <= years; i++)
    {
        Date = this->decreaseDateByOneYear(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByXYearFaster(unsigned short years, MyDate Date)
{
    Date.year -= years;
    return Date;
}

MyDate MyDate::decreaseDateByOneDecade(MyDate Date)
{
    Date.year -= 10;
    return Date;
}

MyDate MyDate::decreaseDateByXDecade(unsigned short decade, MyDate Date)
{
    for (unsigned short i = 1; i <= decade; i++)
    {
        Date = this->decreaseDateByOneDecade(Date);
    }
    return Date;
}

MyDate MyDate::decreaseDateByXDecadesFaster(unsigned short decade, MyDate Date)
{
    Date.year -= (decade * 10);
    return Date;
}

MyDate MyDate::decreaseDateByOneCentury(MyDate Date)
{
    Date.year -= 100;
    return Date;
}

MyDate MyDate::decreaseDateByOneMillennium(MyDate Date)
{
    Date.year -= 1000;
    return Date;
}

MyDate MyDate::getSystemDate()
{
    time_t t = time(0);
    std::tm *now = localtime(&t);

    this->year = (unsigned short)(now->tm_year + 1900);
    this->month = (unsigned short)(now->tm_mon + 1);
    this->day = (unsigned short)(now->tm_mday);

    return *this;
}

bool MyDate::IsDate1BeforeDate2(MyDate Date1, MyDate Date2)
{
    return (Date1.year < Date2.year)
               ? true
               : ((Date1.year == Date2.year) ? (Date1.month < Date2.month ? true : (Date1.month == Date2.month ? Date1.day < Date2.day : false)) : false);
}

bool MyDate::IsDate1EqualDate2(MyDate Date1, MyDate Date2)
{
    return (Date1.year == Date2.year)
               ? ((Date1.month == Date2.month) ? ((Date1.day == Date2.day) ? true : false) : false)
               : false;
}

bool MyDate::isValidDate(MyDate Date)
{
    if (Date.day > numberOfDaysInMonth(Date.month, Date.year))
    {
        std::cout << "\n=== enter a valid date ===\n"
                  << std::endl;
        return false;
    }
    return true;
}

bool MyDate::isFirstDayInMonth(MyDate Date)
{
    return (Date.day == 1);
}

bool MyDate::isLastDayInMonth(MyDate Date)
{
    return (Date.day == numberOfDaysInMonth(Date.month, Date.year));
}

bool MyDate::isFirstMonthInYear(unsigned short month)
{
    return month == 1;
}

bool MyDate::isLastMonthInYear(unsigned short month)
{
    return (month == 12);
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

void MyDate::printMonthCalendar(unsigned short month, unsigned short year)
{
    unsigned short current = dayOfWeekOrder(1, month, year);
    unsigned short numberOfDays = numberOfDaysInMonth(month, year);

    printf("\n ________________%s________________\n\n", monthShortName(month).c_str());

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    unsigned short i;
    for (i = 0; i < current; i++)
    {
        printf("     ");
    }

    for (unsigned short j = 1; j <= numberOfDays; j++)
    {
        printf("%5d", j);
        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }

    printf("\n __________________________________\n");
}

void MyDate::printYearCalendar(unsigned short year)
{
    printf("\n __________________________________\n");
    printf("\tCalendar - %d", year);
    printf("\n __________________________________\n");

    for (unsigned short i = 1; i < 12; i++)
    {
        printMonthCalendar(i, year);
    }
}