#ifndef STRING_DATE_HPP
#define STRING_DATE_HPP

#include "date.hpp"
#include <string>

namespace StringDate
{
    MyDate stringToDate(std::string dateSting, std::string delem = "/");

    std::string dateToString(MyDate Date, std::string delem = "/");
}

#endif