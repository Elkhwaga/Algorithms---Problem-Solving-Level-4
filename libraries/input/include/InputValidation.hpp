#ifndef INPUT_VALIDATION_HPP
#define INPUT_VALIDATION_HPP

#include <string>

namespace InputValidation
{
    bool checkLength(const std::string &input, short requiredLength);
    bool checkDigitOnly(const std::string &input);
    bool isValidYear(const std::string &year);
    bool isValidMonth(const std::string &month);
    bool isValidDayInWeek(const std::string &day);
    bool isValidDayInMonth(const std::string &day);
    bool isValidDateFormat(const std::string &dateStr, std::string delem = "/");
}

#endif