#include "InputNumber.hpp"
#include "utils.hpp"
#include <iostream>

namespace InputNumber
{
    int randomNumber(int min, int max)
    {
        return std::rand() % (max - min + 1) + min;
    }

    float readNumber(const std::string &message)
    {
        float number;
        while (true)
        {
            std::cout << message;
            if (std::cin >> number) // Check if input is valid
            {
                break; // Exit loop if input is valid
            }
            else
            {
                Utils::clearInputError();
                std::cout << "Error: Please enter a valid number." << std::endl;
            }
        }
        return number;
    }

    int readNumberInRange(const std::string &message, int min, int max)
    {
        int number = 0;
        do
        {
            std::cout << message;
            std::cin >> number;
            if (std::cin.fail() || number < min || number > max) // Check if the input is valid and non-negative
            {
                Utils::clearInputError(); // Reset the input stream in case of an error
                std::cout << "Invalid input. Please enter a non-negative integer between " << min << " and " << max << std::endl;
                number = -1; // Prompt the user again
            }
        } while (number < min || number > max); // Continue until a valid positive integer is entered
        return number;
    }
}
