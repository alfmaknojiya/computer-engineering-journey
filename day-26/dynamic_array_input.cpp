
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int* arr = new int[size];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}
