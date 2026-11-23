#include <iostream>
#include <bitset>
using namespace std;

unsigned char turnOn(unsigned char n, int bit) {
    return n | (1 << bit);
}

unsigned char turnOff(unsigned char n, int bit) {
    return n & ~(1 << bit);
}

unsigned char toggle(unsigned char n, int bit) {
    return n ^ (1 << bit);
}

bool isOn(unsigned char n, int bit) {
    return (n & (1 << bit)) != 0;
}

void printBinary(unsigned char n) {
    cout << bitset<8>(n) << endl;
}

int main() {
    unsigned char lights = 0;

    cout << "Initial state: ";
    printBinary(lights);

    lights = turnOn(lights, 0);
    cout << "After turning ON light 0: ";
    printBinary(lights);

    lights = turnOn(lights, 3);
    cout << "After turning ON light 3: ";
    printBinary(lights);

    lights = turnOff(lights, 0);
    cout << "After turning OFF light 0: ";
    printBinary(lights);

    lights = toggle(lights, 3);
    cout << "After toggling light 3: ";
    printBinary(lights);

    cout << "Is light 3 ON? " << (isOn(lights, 3) ? "Yes" : "No") << endl;

    return 0;
}
