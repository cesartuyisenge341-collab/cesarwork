#include <iostream>
using namespace std;

int maxOf(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a, b;
    float c;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Maximum: " << maxOf(a, b) << endl;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    cout << "Fahrenheit: " << celsiusToFahrenheit(c) << endl;

    cout << "Prime numbers below 100:" << endl;

    for (int i = 2; i < 100; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
