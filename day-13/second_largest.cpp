#include <iostream>
#include <vector>
#include <limits>
int main() {
    std::vector<int> numbers;
    std::cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }
    int largest = numbers[0];
    int secondLargest = std::numeric_limits<int>::min();
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] <largest) {
            secondLargest = numbers[i];
        }
    }
    if (secondLargest == std::numeric_limits<int>::min()) {
        std::cout << "There is no second largest number." << std::endl;
    } else {
        std::cout << "The largest number is: " << largest << std::endl;
        std::cout << "The second largest number is: " << secondLargest << std::endl;
    }
    return 0;
}