#include "InputValidation.hpp"
#include <cctype>

namespace InputValidation
{
    bool checkLength(const std::string &input, short requiredLength)
    {
        return input.length() == requiredLength;
    }

    bool checkDigitOnly(const std::string &input)
    {
        for (char c : input)
        {
            if (!isdigit(c))
                return false;
        }
        return true;
    }

    bool isValidYear(const std::string &year)
    {
        if (checkLength(year, 4) && !checkDigitOnly(year))
            return false;

        return (std::stoi(year) >= 1000 && std::stoi(year) <= 9999);
    }

    bool isValidMonth(const std::string &month)
    {
        if (checkLength(month, 2) && !checkDigitOnly(month))
            return false;

        return (std::stoi(month) >= 1 && std::stoi(month) <= 12);
    }

    bool isValidDayInWeek(const std::string &day)
    {
        if (checkLength(day, 1) && !checkDigitOnly(day))
            return false;

        return (std::stoi(day) >= 1 && std::stoi(day) <= 7);
    }

    bool isValidDayInMonth(const std::string &day)
    {
        if (checkLength(day, 2) && !checkDigitOnly(day))
            return false;

        return (std::stoi(day) >= 1 && std::stoi(day) <= 31);
    }
    bool isValidDateFormat(const std::string &dateStr, std::string delem)
    {
        // Check if the string length is correct
        // For DD<delim>MM<delim>YYYY, the length should be 10 + (delem.length() - 1) * 2
        unsigned short expectedLength = 8 + delem.length() * 2;
        if (dateStr.length() != expectedLength)
        {
            return false;
        }

        // Check if the separators match the delimiter
        if (dateStr.substr(2, delem.length()) != delem || dateStr.substr(5 + delem.length() - 1, delem.length()) != delem)
        {
            return false;
        }

        // Check if all other characters are digits
        for (unsigned short i = 0; i < dateStr.length(); ++i)
        {
            // Skip the delimiter positions
            if (i == 2 || i == 5 + delem.length() - 1)
                continue;

            // Check if the character is a digit
            if (!isdigit(dateStr[i]))
            {
                return false;
            }
        }

        return true;
    }
}
