#include "ReadDate.hpp"
#include "StringDate.hpp"
#include <iostream>

int main()
{
    std::string dateString = ReadDate::readFullDateString("Please enter a date (dd/mm/yyyy): ", "Please enter a valid date (dd/mm/yyyy): ");

    MyDate Date = StringDate::stringToDate(dateString);

    std::cout << "\n"
              << dateString << "\n";

    std::cout << "\n"
              << StringDate::formateDate(Date) << "\n";
    std::cout << "\n"
              << StringDate::formateDate(Date, "yyyy/dd/mm") << "\n";
    std::cout << "\n"
              << StringDate::formateDate(Date, "mm/dd/yyyy") << "\n";
    std::cout << "\n"
              << StringDate::formateDate(Date, "mm-dd-yyyy") << "\n";
    std::cout << "\n"
              << StringDate::formateDate(Date, "dd-mm-yyyy") << "\n";
    std::cout << "\n"
              << StringDate::formateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

    return 0;
}