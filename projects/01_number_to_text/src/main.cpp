#include <iostream>
#include <string>
using namespace std;

string numberToText(int num)
{
    if (num == 0)
        return "";

    if (num >= 1 && num <= 19)
    {
        string arr[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        return arr[num] + " ";
    }

    if (num >= 20 && num <= 99)
    {
        string arr[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        return arr[num / 10 - 2] + " " + numberToText(num % 10);
    }

    if (num >= 20 && num <= 99)
    {
        string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        return arr[num / 10 - 2] + " " + numberToText(num % 10);
    }

    if (num >= 100 && num <= 199)
    {
        return "one Hundred " + numberToText(num % 100);
    }

    if (num >= 200 && num <= 999)
    {
        return numberToText(num / 100) + "Hundreds " + numberToText(num % 100);
    }

    if (num >= 1000 && num <= 1999)
    {
        return "one Thousand " + numberToText(num % 1000);
    }

    if (num >= 2000 && num <= 999999)
    {
        return numberToText(num / 1000) + "Thousands " + numberToText(num % 1000);
    }

    if (num >= 1000000 && num <= 1999999)
    {
        return "one Million " + numberToText(num % 1000000);
    }

    if (num >= 2000000 && num <= 999999999)
    {
        return numberToText(num / 100000) + "Million " + numberToText(num % 100000);
    }

    if (num >= 1000000000 && num <= 1999999999)
    {
        return "one Billion " + numberToText(num % 1000000000);
    }

    if (num >= 2000000000 && num <= 999999999999)
    {
        return numberToText(num / 1000000000) + "Billion " + numberToText(num % 1000000000);
    }

    if (num >= 1000000000000 && num <= 1999999999999)
    {
        return "one Trillion " + numberToText(num % 1000000000000);
    }

    if (num >= 2000000000000 && num <= 999999999999999)
    {
        return numberToText(num / 1000000000000) + "Trillion " + numberToText(num % 1000000000000);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << numberToText(num) << endl;
    return 0;
}