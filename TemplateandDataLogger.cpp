#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T, int N>
class RingBuffer {
private:
    T data[N];
    int next;
    int count;

public:
    RingBuffer() {
        next = 0;
        count = 0;
    }

    void push(T value) {
        data[next] = value;

        next = (next + 1) % N;

        if (count < N) {
            count++;
        }
    }

    int size() {
        return count;
    }

    double average() {
        if (count == 0)
            return 0;

        double sum = 0;

        for (int i = 0; i < count; i++) {
            sum += data[i];
        }

        return sum / count;
    }

    void print() {
        cout << "Stored readings: ";

        int start = (count == N) ? next : 0;

        for (int i = 0; i < count; i++) {
            cout << data[(start + i) % N] << " ";
        }

        cout << endl;
    }
};

int main() {
    srand(time(0));

    RingBuffer<float, 10> temperature;

    for (int i = 1; i <= 10; i++) {
        float reading = 20 + rand() % 16;

        temperature.push(reading);

        cout << "\nReading " << i << ": "
             << reading << " C" << endl;

        cout << "Current Average: "
             << temperature.average() << " C" << endl;

        if (temperature.average() > 30) {
            cout << "WARNING: Average temperature is above 30 C!" << endl;
        }
    }

    cout << "\nFinal Temperature Report" << endl;

    temperature.print();

    cout << "Total readings: " << temperature.size() << endl;

    cout << "Final Average: "
         << temperature.average() << " C" << endl;

    return 0;
}
