#include "StringDate.hpp"
#include "InputString.hpp"

#include <iostream>
#include <vector>

MyDate StringDate::stringToDate(std::string dateSting, std::string delem)
{
    MyDate Date;
    std::vector<std::string> vDate;

    vDate = InputString::splitString(dateSting, delem);

    Date.day = std::stoi(vDate[0]);
    Date.month = std::stoi(vDate[1]);
    Date.year = std::stoi(vDate[2]);

    return Date;
}

std::string StringDate::dateToString(MyDate Date, std::string delem)
{
    return (std::to_string(Date.day) + delem + std::to_string(Date.month) + delem + std::to_string(Date.year));
}

std::string StringDate::replaceWordInString(std::string str, std::string stringToReplace, std::string replaceTo)
{
    short pos = str.find(stringToReplace);
    while (pos != std::string::npos)
    {
        str = str.replace(pos, stringToReplace.length(), replaceTo);
        pos = str.find(stringToReplace); // find next
    }
    return str;
}

std::string StringDate::formateDate(MyDate Date, std::string dateFormat)
{
    std::string day = std::to_string(Date.day);
    std::string month = std::to_string(Date.month);
    std::string year = std::to_string(Date.year);

    dateFormat = replaceWordInString(dateFormat, "dd", day);
    dateFormat = replaceWordInString(dateFormat, "mm", month);
    dateFormat = replaceWordInString(dateFormat, "yyyy", year);

    return dateFormat;
}
