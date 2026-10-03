#include <iostream>
#include <string>
int main() {
   int number;
   std::cout << "Enter a number or (0 to exit): ";
   std::cin >> number;
   while (number != 0) {
       std::cout << "you entered: " << number << std::endl;
       std::cout << "Enter a number or (0 to exit): ";
       std::cin >> number;
   }
   return 0;
}