#include "ReadDate.hpp"
#include "validation.hpp"
#include "InputValidation.hpp"
#include <iostream>

std::string ReadDate::readDayInWeek()
{
    std::string input;
    std::cout << "Enter a day (between 1 and 7): ";
    std::cin >> input;
    while (!InputValidation::isValidDayInWeek(input))
    {
        std::cout << "Enter a valid day (between 1 and 7): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string ReadDate::readDayInMonth()
{
    std::string input;
    std::cout << "Enter a day (between 1 and 31): ";
    std::cin >> input;
    while (!InputValidation::isValidDayInMonth(input))
    {
        std::cout << "Enter a valid day (between 1 and 31): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string ReadDate::readMonth()
{
    std::string input;
    std::cout << "Enter a month (between 1 and 12): ";
    std::cin >> input;
    while (!InputValidation::isValidMonth(input))
    {
        std::cout << "Enter a valid month (between 1 and 12): " << std::endl;
        std::cin >> input;
    }
    return input;
}

std::string ReadDate::readYear()
{
    std::string input;
    std::cout << "Enter a year (between 1000 and 9999): ";
    std::cin >> input;
    while (!InputValidation::isValidYear(input))
    {
        std::cout << "Enter a valid year (between 1000 and 9999): " << std::endl;
        std::cin >> input;
    }
    return input;
}

MyDate ReadDate::readFullDate()
{
    MyDate Date;
    do
    {
        Date.day = std::stoi(readDayInMonth());
        Date.month = std::stoi(readMonth());
        Date.year = std::stoi(readYear());
    } while (!(Validation::isValidDate(Date)));

    return Date;
}