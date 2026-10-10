#include <iostream>
#include <vector>
void largestAndSmallest(const std::vector<int>& numbers, int& largest, int& smallest) {
    if (numbers.empty()) {
        std::cerr << "The vector is empty." << std::endl;
        return;
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
}
float average(const std::vector<int>& numbers)
{
    if (numbers.empty()) {
        std::cerr << "The vector is empty." << std::endl;
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return static_cast<float>(sum) / numbers.size();
}
int main() {
    std::vector<int> numbers;
    std::cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
    }

    int largest, smallest;
    largestAndSmallest(numbers, largest, smallest);
    std::cout << "The largest number is: " << largest << std::endl;
    std::cout << "The smallest number is: " << smallest << std::endl;

    float avg;
    average(numbers, avg);
    std::cout << "The average of the numbers is: " << avg << std::endl;

    return 0;
}
