
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));

    std::cout << "Enter 9 numbers for a 3x3 matrix: ";

    // Input matrix values
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Print the matrix
    std::cout << "\nYour matrix:\n";

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Calculate row sums
    std::cout << "\nRow sums:\n";

    for (int i = 0; i < matrix.size(); i++) {
        int rowSum = 0;

        for (int j = 0; j < matrix[i].size(); j++) {
            rowSum += matrix[i][j];
        }

        std::cout << "Sum of row " << i << ": " << rowSum << std::endl;
    }

    // Calculate column sums
    std::cout << "\nColumn sums:\n";

    for (int j = 0; j < matrix[0].size(); j++) {
        int columnSum = 0;

        for (int i = 0; i < matrix.size(); i++) {
            columnSum += matrix[i][j];
        }

        std::cout << "Sum of column " << j << ": "
                  << columnSum << std::endl;
    }

    return 0;
}
