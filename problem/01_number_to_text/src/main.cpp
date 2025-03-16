#include "InputNumber.hpp"
#include <iostream>

std::string numberToText(unsigned int num)
{
    std::string result;
    if (num == 0)
        result += "";

    if (num >= 1 && num <= 19)
    {
        std::string arr[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        result += arr[num] + " ";
    }

    if (num >= 20 && num <= 99)
    {
        std::string arr[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        result += arr[num / 10 - 2] + " " + numberToText(num % 10);
    }

    if (num >= 20 && num <= 99)
    {
        std::string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        result += arr[num / 10 - 2] + " " + numberToText(num % 10);
    }

    if (num >= 100 && num <= 199)
    {
        result += "one Hundred " + numberToText(num % 100);
    }

    if (num >= 200 && num <= 999)
    {
        result += numberToText(num / 100) + "Hundreds " + numberToText(num % 100);
    }

    if (num >= 1000 && num <= 1999)
    {
        result += "one Thousand " + numberToText(num % 1000);
    }

    if (num >= 2000 && num <= 999999)
    {
        result += numberToText(num / 1000) + "Thousands " + numberToText(num % 1000);
    }

    if (num >= 1000000 && num <= 1999999)
    {
        result += "one Million " + numberToText(num % 1000000);
    }

    if (num >= 2000000 && num <= 999999999)
    {
        result += numberToText(num / 100000) + "Million " + numberToText(num % 100000);
    }

    if (num >= 1000000000 && num <= 1999999999)
    {
        result += "one Billion " + numberToText(num % 1000000000);
    }

    if (num >= 2000000000 && num <= 999999999999)
    {
        result += numberToText(num / 1000000000) + "Billion " + numberToText(num % 1000000000);
    }

    if (num >= 1000000000000 && num <= 1999999999999)
    {
        result += "one Trillion " + numberToText(num % 1000000000000);
    }

    if (num >= 2000000000000 && num <= 999999999999999)
    {
        result += numberToText(num / 1000000000000) + "Trillion " + numberToText(num % 1000000000000);
    }
    return result;
}

int main()
{
    unsigned int number = InputNumber::readNumber("Enter a number: ");
    std::cout << numberToText(number) << std::endl;
    return 0;
}