#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));

    std::cout << "Enter 9 numbers for a 3x3 matrix: ";
      
        for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cin >> matrix[i][j];
        }
    }
int maindiagonalsum =0;
    for (int i = 0; i < matrix.size(); i++) {
        maindiagonalsum += matrix[i][i];
    }   
    std::cout << "Main diagonal sum: " << maindiagonalsum << std::endl;
    // Calculate the main diagonal sum here
int secondarydiagonalsum = 0;
    for (int i = 0; i < matrix.size(); i++) {
        secondarydiagonalsum += matrix[i][matrix.size() - 1 - i];
    }
    std::cout << "Secondary diagonal sum: " << secondarydiagonalsum << std::endl;
    // Calculate the secondary diagonal sum here        
    return 0;
}
