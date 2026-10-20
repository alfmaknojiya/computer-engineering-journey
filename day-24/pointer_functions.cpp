
#include <iostream>
using namespace std;

void doubleValue(int* ptr) {
    *ptr = *ptr * 2;
}

int main() {
    int number = 25;

    cout << "Before function: " << number << endl;

    doubleValue(&number);

    cout << "After function: " << number << endl;

    return 0;
}
