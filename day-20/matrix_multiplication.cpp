#include <iostream>
#include <vector>

int main() {
    int size = 2;

    std::vector<std::vector<int>> A(
        size, std::vector<int>(size, 0)
    );

    std::vector<std::vector<int>> B(
        size, std::vector<int>(size, 0)
    );
    std::cout << "Enter 4 numbers for Matrix A: ";

for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        std::cin >> A[i][j];
    }
}
std::cout << "Enter 4 numbers for Matrix B: ";

for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        std::cin >> B[i][j];
    }
}
std::vector<std::vector<int>> result(
    size, std::vector<int>(size, 0)
);
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        for (int k = 0; k < size; k++) {
            result[i][j] += A[i][k] * B[k][j];
        }
    }
}
std::cout << "Result of multiplication:\n";

for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        std::cout << result[i][j] << " ";
    }
    std::cout << std::endl;
}
    return 0;
}
