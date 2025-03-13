#ifndef DATE_H
#define DATE_H

#include <string>

namespace Date
{
    std::string readYear();

    std::string readMonth();

    short numberOfDaysInYear(short year);

    short numberOfHoursInYear(short year);

    int numberOfMinutesInYear(short year);

    int numberOfSecondsInYear(short year);

    short numberOfDaysInMonth(short month, short year);

    short numberOfHoursInMonth(short month, short year);

    int numberOfMinutesInMonth(short month, short year);

    int numberOfSecondsInMonth(short month, short year);
}

#endif