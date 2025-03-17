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
