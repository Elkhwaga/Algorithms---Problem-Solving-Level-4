#ifndef INPUT_NUMBER_HPP
#define INPUT_NUMBER_HPP
#include <string>

namespace InputNumber
{
    float readNumber(const std::string &message);

    int randomNumber(int min, int max);

    int readNumberInRange(const std::string &message, int min, int max);

}

#endif