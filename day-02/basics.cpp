#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    int birthYear;
    int currentYear = 2026;


    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;
    int calculatedAge = currentYear - birthYear;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << calculatedAge << " years old." << std::endl;
    std::cout << "You were born in " << birthYear << "." << std::endl;
    if (calculatedAge >= 18) {
    std::cout << "You are an adult." << std::endl;
} 
    else {
    std::cout << "You are a minor." << std::endl;
}
    return 0;
}
