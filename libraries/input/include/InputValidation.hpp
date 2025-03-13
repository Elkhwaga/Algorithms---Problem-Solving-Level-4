#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

#include <string>

namespace InputValidation
{
    bool checkLength(const std::string &input, int requiredLength);
    bool checkDigitOnly(const std::string &input);
    bool isValidYear(const std::string &year);
    bool isValidMonth(const std::string &month);
}

#endif