#include <iostream>
#include <vector>
int searchvector(const std::vector<int>& numbers, int searchValue) {
    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] == searchValue) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    std::vector<int> numbers{10,20,30,40,50};   
    int searchValue;
    std::cout << "Enter a number to search for: ";
    std::cin >> searchValue;
    int index = searchvector(numbers, searchValue);
    std::cout << index << std::endl;
    return 0;
}
