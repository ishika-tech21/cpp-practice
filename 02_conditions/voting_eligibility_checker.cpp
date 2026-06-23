#include <iostream>
 
 int main()
 {
     int age;
     std::cout << "================================\n";
     std::cout << "   VOTING ELIGIBILITY CHECKER \n";
     std::cout << "================================\n";
     
     std::cout << "Enter Your Age: ";
     
     if(!(std::cin >> age))
     {
         std::cout << "Error: Invalid input. Please enter a valid age.\n";
         return 1;
     }
     
     std::cout << "\nRESULT: \n";
     
     const int VOTING_AGE = 18;
    
     if (age < 0)
     {
         std::cout << "Age cannot be negative.";
     }
     
    else if (age >= VOTING_AGE)
     {
         std::cout << "You're eligible to vote.";
     }
     else 
     {
         std::cout << "You're not eligible.";
     }
     return 0;
 }
