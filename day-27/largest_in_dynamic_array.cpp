#include <iostream>
#include <vector>
using namespace std;
int main() { 
    int size;
    cout<< "enter array size: ";
    cin>> size;
    if (size <= 0) {
        cout<< "I invalid array size !" << endl;
        return 1;

    }

int* arr = new int[size];
for (int i=0; i < size; i++) {
    cout << "enter number "<< i +1 << ":";
    cin >> arr[i];

}

int largest = arr[0];

for (int i = 1; i < size; i++) {
    if(arr[i]>largest) {
        largest = arr[i];
    }
}
cout << "largest number: "<< largest << endl;

delete[] arr;
arr = nullptr;
return 0;
}