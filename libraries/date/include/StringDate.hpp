#ifndef STRING_DATE_HPP
#define STRING_DATE_HPP

#include "date.hpp"
#include <string>

namespace StringDate
{
    MyDate stringToDate(std::string dateSting, std::string delem = "/");

    std::string dateToString(MyDate Date, std::string delem = "/");

    std::string replaceWordInString(std::string str, std::string stringToReplace, std::string replaceTo);

    std::string formateDate(MyDate Date, std::string dateFormat = "dd/mm/yyyy");
}

#endif