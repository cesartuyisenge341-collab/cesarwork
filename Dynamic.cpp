#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "How many numbers do you want to store? ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 0;
    }

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];

        sum += arr[i];
    }

    cout << "Average: " << sum / n << endl;

    delete[] arr;

    return 0;
}
