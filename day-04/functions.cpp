
#include <iostream>
#include <string>

void add(int a, int b);

int main() {
    int a ;
    int b ;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    add(a, b);

    return 0;
}
void add(int a, int b) {
    std::cout << "The sum is: " << a + b << std::endl;
}