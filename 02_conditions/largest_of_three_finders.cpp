#include <iostream>

 int main()
 {
     int a, b, c;
     
     std::cout << "====================================\n";
     std::cout << "      LARGEST OF THREE NUMBERS\n";
     std::cout << "====================================\n";
     
     std::cout << "Enter three integers: ";
     
     if (!(std::cin >> a >> b >> c))
     {
    std::cout << "Error: Invalid input. Please enter valid integers.\n";
    return 1;
     }
     std::cout << "\nRESULT\n";
     std::cout << "The largest number is:  ";
     
     //logic 
     
     if (a >= b && a >= c)
     {
         std::cout << a;
     }
     else if (b >= a && b >= c)
     {
         std::cout << b;
     }
     else
     {
         std::cout << c;
     } 
     return 0;
 }
