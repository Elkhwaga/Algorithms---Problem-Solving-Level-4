#include "ReadDate.hpp"
#include "display.hpp"

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());
    unsigned short month = std::stoi(ReadDate::readMonth());

    Display::printMonthCalendar(month, year);

    return 0;
}