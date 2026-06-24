#include <iostream>
 int main()
 {
     int marks;
     
     std::cout << "=====================================\n";
     std::cout << "           GRADE EVALUATOR\n";
     std::cout << "=====================================\n";
     
     std::cout << "Enter Marks(0-100): ";
     
     if (!(std::cin >> marks))
     {
        std::cout << "Error: Invalid input. Please enter valid marks.\n";
    return 1;
     }
     if(marks < 0 || marks > 100)
     {
        std::cout << "Error: Invalid input. Please enter valid marks.\n";
        return 1;
     }
     
     std::cout << "\nRESULT\n";
     
     if (marks >= 95)
     { 
        std::cout <<  "A+";
     }
     else if (marks >= 90)
     {
        std::cout << "A";
     }
     else if (marks >= 80)
     {
        std::cout << "B";
     }
     else if (marks >= 65)
     {
        std::cout << "C";
     }
     else if (marks >= 33)
     {
        std::cout << "D";
     }
     else 
     {
         std::cout << "F";
     }
    return 0;
 }
