#include <iostream>
using namespace std;

int main() {
    int arr[8];
    int temp, search;
    bool found = false;

    cout << "Enter 8 numbers:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter number to search: ";
    cin >> search;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == search) {
            cout << "Found at position: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
