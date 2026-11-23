#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;

    if (b != 0) {
        cout << "Integer Division: " << a / b << endl;
        cout << "Decimal Division: " << (double)a / b << endl;
        cout << "Remainder: " << a % b << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    if (a % 2 == 0)
        cout << a << " is Even" << endl;
    else
        cout << a << " is Odd" << endl;

    return 0;
}
