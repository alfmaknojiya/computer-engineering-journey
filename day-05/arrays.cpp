#include <iostream>

int main() {
    int numbers[5];
    int sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }
    std::cout << "You numbersa are: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << std::endl;
        sum += numbers[i];
    }
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
