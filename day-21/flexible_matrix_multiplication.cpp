#include <iostream>
#include <vector>

int main() {
    int rowsA, colsA, rowsB, colsB;

    std::cout << "Enter rows and columns for Matrix A: ";
    std::cin >> rowsA >> colsA;

    std::cout << "Enter rows and columns for Matrix B: ";
    std::cin >> rowsB >> colsB;
    
   if (colsA != rowsB) {
        std::cout << "Matrix multiplication is not possible!\n";
        return 0;
    }

    std::cout << "Matrix multiplication is possible!\n";
        std::vector<std::vector<int>> A(
        rowsA, std::vector<int>(colsA, 0)
    );

    std::vector<std::vector<int>> B(
        rowsB, std::vector<int>(colsB, 0)
    );
        std::cout << "Enter elements of Matrix A:\n";

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter elements of Matrix B:\n";

    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            std::cin >> B[i][j];
        }
    }
        std::vector<std::vector<int>> result(
        rowsA, std::vector<int>(colsB, 0)
    );
        for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
        std::cout << "Result of multiplication:\n";

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

