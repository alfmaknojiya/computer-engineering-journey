#include <iostream>
#include <vector>
int main() {
    std::vector<int> numbers;
    for(int i = 0; i < 5; i++) {
        int number;
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> number;
        numbers.push_back(number);
    }


    for(int i = 0; i < numbers.size(); i++) {
        for(int j=0; j<numbers.size()-1; j++) {
            if(numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    std::cout << "The sorted numbers are: " << std::endl;
    for(int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << std::endl;;
    }

    return 0;
}