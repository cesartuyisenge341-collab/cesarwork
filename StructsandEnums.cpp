#include <iostream>
using namespace std;

enum Status {
    OK,
    WARNING,
    ERROR
};

struct Reading {
    int id;
    float temperature;
    float humidity;
    Status status;
};

int main() {
    Reading readings[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter reading ID: ";
        cin >> readings[i].id;

        cout << "Enter temperature: ";
        cin >> readings[i].temperature;

        cout << "Enter humidity: ";
        cin >> readings[i].humidity;

        if (readings[i].temperature > 40)
            readings[i].status = ERROR;
        else if (readings[i].temperature > 30)
            readings[i].status = WARNING;
        else
            readings[i].status = OK;
    }

    cout << "\nSensor Reading Report\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nID: " << readings[i].id << endl;
        cout << "Temperature: " << readings[i].temperature << endl;
        cout << "Humidity: " << readings[i].humidity << endl;
        cout << "Status: ";

        switch (readings[i].status) {
            case OK:
                cout << "OK";
                break;

            case WARNING:
                cout << "WARNING";
                break;

            case ERROR:
                cout << "ERROR";
                break;
        }

        cout << endl;
    }

    return 0;
}
