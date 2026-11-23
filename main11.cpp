#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void minMax(int arr[], int size, int &mn, int &mx) {
    mn = arr[0];
    mx = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < mn)
            mn = arr[i];

        if (arr[i] > mx)
            mx = arr[i];
    }
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swap(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    int arr[5] = {12, 5, 30, 8, 20};
    int mn, mx;

    minMax(arr, 5, mn, mx);

    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;

    return 0;
}
