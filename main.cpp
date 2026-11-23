#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5f;
    double c = 12.345;
    char d = 'A';
    bool e = true;

    cout << "Integer: " << a << " Size: " << sizeof(a) << " bytes" << endl;
    cout << "Float: " << b << " Size: " << sizeof(b) << " bytes" << endl;
    cout << "Double: " << c << " Size: " << sizeof(c) << " bytes" << endl;
    cout << "Character: " << d << " Size: " << sizeof(d) << " byte" << endl;
    cout << "Boolean: " << e << " Size: " << sizeof(e) << " byte" << endl;

    return 0;
}
