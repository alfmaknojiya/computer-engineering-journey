#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers ;
    std::cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size(); i++) {

        bool alreadySeen = false;

        // Check if we've already processed this number
        for (int j = 0; j < i; j++) {
            if (numbers[j] == numbers[i]) {
                alreadySeen = true;
            }
        }

        // Skip numbers we've already counted
        if (alreadySeen) {
            continue;
        }

        // Count how many times this number appears
        int count = 0;

        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[j] == numbers[i]) {
                count++;
            }
        }

        std::cout << numbers[i] << " appears "
                  << count << " times." << std::endl;
    }

    return 0;
}
