#include <iostream>
#include <vector>
int main() {
    int sum = 0;
    std::vector<std::vector<int>> grid(3, std::vector<int>(3, 0));
    std::cout << "Enter 9 numbers for a 3x3 grid: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> grid[i][j];
        }
    }       
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            std::cout << grid[i][j] << " ";
            sum += grid[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Sum: " << sum << std::endl;   
    return 0;   
}