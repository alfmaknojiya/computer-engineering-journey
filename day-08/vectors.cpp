#include <iostream>
#include <vector>
int main() {
    int i = 0;
    std::vector<int> numbers;
    for(int i = 0; i < 5; i++) {
        int number;
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> number;
        numbers.push_back(number);
    }
int sum = 0;
for(int i = 0; i < numbers.size(); i++) {
    sum += numbers[i];
}
std::cout << "The sum is: " << sum << std::endl; 
    
    return 0;
}