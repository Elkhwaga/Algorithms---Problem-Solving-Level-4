#include "InputString.hpp"
#include <iostream>

std::vector<std::string> InputString::splitString(std::string str, std::string delim)
{
    std::vector<std::string> vString;
    short pos = 0;
    std::string word;
    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            vString.push_back(word);
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        vString.push_back(str);
    }
    return vString;
}
