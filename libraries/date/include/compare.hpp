#ifndef COMPARE_HPP
#define COMPARE_HPP

#include "date.hpp"
#include "enums.hpp"

namespace Compare
{
    bool isDate1BeforeDate2(MyDate Date1, MyDate Date2);

    bool isDate1AfterDate2(MyDate Date1, MyDate Date2);

    bool isDate1EqualDate2(MyDate Date1, MyDate Date2);

    DateCompare compareDate(MyDate Date1, MyDate Date2);
}

#endif