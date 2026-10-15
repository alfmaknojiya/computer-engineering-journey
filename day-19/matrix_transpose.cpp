#include <iostream>
#include <vector>

int main() {
    int rows = 2;
    int cols = 3;

    std::vector<std::vector<int>> matrix(
        rows, std::vector<int>(cols, 0)
    );
    std::cout << "Enter 6 numbers for a 2x3 matrix: ";

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        std::cin >> matrix[i][j];
    }
}
    std::cout << "Original matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Transposed matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}