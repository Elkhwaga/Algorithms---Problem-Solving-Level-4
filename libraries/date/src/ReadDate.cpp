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
        std::cout << "Enter a valid day (between 1 and 7): ";
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
        std::cout << "Enter a valid day (between 1 and 31): ";
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
        std::cout << "Enter a valid month (between 1 and 12): ";
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
        std::cout << "Enter a valid year (between 1000 and 9999): ";
        std::cin >> input;
    }
    return input;
}

std::string ReadDate::readFullDateString(const std::string &message, const std::string &errorMessage, std::string delem)
{
    std::string input;
    std::cout << message;
    std::cin >> input;

    while (!InputValidation::isValidDateFormat(input, delem))
    {
        std::cout << errorMessage;
        std::cin >> input;
    }

    std::string day = input.substr(0, 2);
    std::string month = input.substr(3, 2);
    std::string year = input.substr(6, 4);

    if ((InputValidation::isValidDayInMonth(day) &&
         InputValidation::isValidMonth(month) &&
         InputValidation::isValidYear(year)) &&
        Validation::isValidDate(std::stoi(day), std::stoi(month), std::stoi(year)))
    {
        return input;
    }

    return readFullDateString(message, errorMessage, delem);
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