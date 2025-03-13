#ifndef INPUTUSER_H
#define INPUTUSER_H
#include <string>

namespace InputNumber
{
    float readNumber(const std::string &message);

    int randomNumber(int min, int max);

    int readNumberInRange(const std::string &message, int min, int max);

}

#endif