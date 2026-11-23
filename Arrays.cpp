#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int largest, smallest;
    double sum = 0;

    cout << "Enter 10 integers:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    largest = arr[0];
    smallest = arr[0];

    for (int i = 0; i < 10; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];

        sum += arr[i];
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Average: " << sum / 10 << endl;

    cout << "Array in reverse order: ";

    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
