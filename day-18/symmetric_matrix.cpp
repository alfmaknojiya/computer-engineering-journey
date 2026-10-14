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
    bool isSymmetric = true;
    for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
        if (matrix[i][j] != matrix[j][i]) {
            isSymmetric = false;
        }
    }
}
if (isSymmetric) {
    std::cout << "The matrix is symmetric." << std::endl;
} else {
    std::cout << "The matrix is not symmetric." << std::endl;
}
    
    return 0;
}
