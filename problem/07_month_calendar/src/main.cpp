#include "date.hpp"

int main()
{
    std::string year = MyDate::readYear();
    std::string month = MyDate::readMonth();

    MyDate::printMonthCalendar(std::stoi(month), std::stoi(year));

    return 0;
}