#include <iostream>

int main()
{
    int number;

    std::cout << "=================================\n";
    std::cout << "    POSITIVE NEGATIVE ANALYZER\n";
    std::cout << "=================================\n";

    std::cout << "Enter an integer: ";

    if (!(std::cin >> number))
    {
        std::cout << "Error: Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    std::cout << "\nResult:\n";

    if (number > 0)
    {
        std::cout << number << " is a Positive Number.\n";
    }
    else if (number < 0)
    {
        std::cout << number << " is a Negative Number.\n";
    }
    else
    {
        std::cout << "The number is Zero.\n";
    }

    return 0;
}
