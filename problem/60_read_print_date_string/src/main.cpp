#include "ReadDate.hpp"
#include "StringDate.hpp"
#include <iostream>

int main()
{
    std::string dateString = ReadDate::readFullDateString("Please enter a date (01/01/1900): ", "Please enter a valid date (01/01/1900): ");

    MyDate Date = StringDate::stringToDate(dateString);

    std::cout << "\nDay: " << Date.day << std::endl;
    std::cout << "Month: " << Date.month << std::endl;
    std::cout << "Year: " << Date.year << std::endl;

    std::cout << "Date: " << StringDate::dateToString(Date) << std::endl;

    return 0;
}