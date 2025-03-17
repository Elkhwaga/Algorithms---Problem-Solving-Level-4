#ifndef READ_DATE_HPP
#define READ_DATE_HPP

#include "date.hpp"
#include <string>

namespace ReadDate
{
    std::string readDayInWeek();

    std::string readDayInMonth();

    std::string readMonth();

    std::string readYear();

    MyDate readFullDate();
}

#endif