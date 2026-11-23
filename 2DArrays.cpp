#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int rowSum, diagonalSum = 0;

    cout << "Enter 9 matrix elements:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSum of each row:" << endl;

    for (int i = 0; i < 3; i++) {
        rowSum = 0;

        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }

        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    for (int i = 0; i < 3; i++) {
        diagonalSum += matrix[i][i];
    }

    cout << "\nMain diagonal sum: " << diagonalSum << endl;

    cout << "\nTranspose:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << "\t";
        }
        cout << endl;
    }

    return 0;
}
