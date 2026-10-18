#include <iostream>

int main() {
    int number = 42;

    int* ptr = &number;
    *ptr = 100;
    number = 250;
    std::cout << "Pointer address: " << &ptr << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Address: " << &number << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;
    std::cout << "Value through pointer: " << *ptr << std::endl;

    return 0;
}
