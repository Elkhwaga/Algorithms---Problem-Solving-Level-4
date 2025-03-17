#include "compare.hpp"

bool Compare::isDate1BeforeDate2(MyDate Date1, MyDate Date2)
{
    return (Date1.year < Date2.year)
               ? true
               : ((Date1.year == Date2.year) ? (Date1.month < Date2.month ? true : (Date1.month == Date2.month ? Date1.day < Date2.day : false)) : false);
}

bool Compare::isDate1AfterDate2(MyDate Date1, MyDate Date2)
{
    return !isDate1BeforeDate2(Date1, Date2) && !isDate1EqualDate2(Date1, Date2);
}

bool Compare::isDate1EqualDate2(MyDate Date1, MyDate Date2)
{
    return (Date1.year == Date2.year)
               ? ((Date1.month == Date2.month) ? ((Date1.day == Date2.day) ? true : false) : false)
               : false;
}

DateCompare Compare::compareDate(MyDate Date1, MyDate Date2)
{
    if (isDate1BeforeDate2(Date1, Date2))
        return DateCompare::BEFORE;

    if (isDate1AfterDate2(Date1, Date2))
        return DateCompare::AFTER;

    return DateCompare::EQUAL;
}
