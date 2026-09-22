#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int limit;
    std::cout << "Enter the limit: ";
    std::cin >> limit;

    for (int i = 1; i <= limit; i++) {
        std::cout << number << " X " << i << " = " << number * i << std::endl;
    }

    return 0;
}
