#include "ReadDate.hpp"
#include "display.hpp"

int main()
{
    unsigned short year = std::stoi(ReadDate::readYear());

    Display::printYearCalendar(year);

    return 0;
}