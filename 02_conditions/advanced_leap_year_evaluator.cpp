#include <iostream>

int main()
{
   int year;

    std::cout << "===============================\n";
    std::cout << "      LEAP YEAR EVALUATOR\n";
    std::cout << "===============================\n";
    
    std::cout << "Enter year: ";
    
    if (!(std::cin >> year))
    {
         std::cout << "Error: Invalid input. Please enter valid integers.\n";
    return 1;
    }
    
    std::cout << "\nRESULT\n";
    if (year % 400 == 0)
    {
        std::cout << "Year is a leap year.";
    }
    else if (year % 100 == 0)
    {
        std::cout << "Year is not a leap year.";
    }
    else if (year % 4 == 0)
    {
        std::cout << "Year is a leap year.";
    }
    else 
    {
        std::cout << "Year is not a leap year.";
    }
    return 0;
}
