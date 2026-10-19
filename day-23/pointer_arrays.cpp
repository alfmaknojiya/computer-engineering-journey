#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int* ptr = numbers;

    for (int i = 0; i < 5; i++) {
        ptr[i] = ptr[i] * 2;
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
