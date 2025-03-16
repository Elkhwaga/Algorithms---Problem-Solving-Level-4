#include "date.hpp"

int main()
{
    std::string year = MyDate::readYear();

    MyDate::printYearCalendar(std::stoi(year));

    return 0;
}