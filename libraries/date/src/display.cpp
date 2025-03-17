#include "display.hpp"

void Display::printMonthCalendar(unsigned short month, unsigned short year)
{
    unsigned short current = MyDate::dayOfWeekOrder(1, month, year);
    unsigned short numberOfDays = MyDate::numberOfDaysInMonth(month, year);

    printf("\n ________________%s________________\n\n", MyDate::monthShortName(month).c_str());

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

void Display::printYearCalendar(unsigned short year)
{
    printf("\n __________________________________\n");
    printf("\tCalendar - %d", year);
    printf("\n __________________________________\n");

    for (unsigned short i = 1; i < 12; i++)
    {
        printMonthCalendar(i, year);
    }
}