#include <iostream>
using namespace std;

void reverseArray(int *ptr, int size) {
    int *left = ptr;
    int *right = ptr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main() {
    int number = 25;
    int *ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Value through pointer: " << *ptr << endl;

    int arr[5] = {10, 20, 30, 40, 50};

    reverseArray(arr, 5);

    cout << "Reversed array: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
