#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nMultiplication Table:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "\nSum from 1 to " << n << " = " << sum << endl;

    cout << "\nPattern:" << endl;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
