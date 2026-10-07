#include <iostream>
#include <vector>

int main() { float sum = 0;
    std::vector<int> numbers;
    std::cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
        sum += number;
    }
    int smallest = numbers[0];

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    int largest = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    std::cout << "The largest number is: " << largest << std::endl;
    std::cout << "The smallest number is: " << smallest << std::endl;
    std::cout << "average of the numbers is: " << sum / 5.0 << std::endl;
    return 0;
}