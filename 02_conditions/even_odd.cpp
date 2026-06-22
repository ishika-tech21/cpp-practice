#include <iostream>

int main()
{
    int number;

    std::cout << "=================================\n";
    std::cout << "       EVEN ODD ANALYZER\n";
    std::cout << "=================================\n";

    std::cout << "Enter an integer: ";

    if (!(std::cin >> number))
    {
        std::cout << "Error: Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    std::cout << "\nResult:\n";

    if (number % 2 == 0)
    {
        std::cout << number << " is an Even Number.\n";
    }
    else
    {
        std::cout << number << " is an Odd Number.\n";
    }

    return 0;
}
