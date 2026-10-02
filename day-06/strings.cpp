#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::string lastName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "full name is: " << firstName << " " << lastName << std::endl;
    firstName.length();
    std::cout << "First name length: " << firstName.length() << " characters." << std::endl;
    std::cout << "First character: " << firstName[0] << std::endl;
    char capitalFirstLetter = toupper(firstName[0]);
    std::cout << "Capitalized first name is: " << capitalFirstLetter + firstName.substr(1) << std::endl;
    
    return 0;
}
