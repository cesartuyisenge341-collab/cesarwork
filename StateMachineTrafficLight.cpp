#include <iostream>
using namespace std;

enum class State {
    RED,
    GREEN,
    YELLOW
};

int main() {
    State current = State::RED;
    int remaining = 5;
    char button;

    for (int tick = 1; tick <= 30; tick++) {

        cout << "\nTick " << tick << endl;
        cout << "Pedestrian button? (y/n): ";
        cin >> button;

        if (current == State::GREEN && (button == 'y' || button == 'Y')) {
            current = State::YELLOW;
            remaining = 2;
        }

        switch (current) {
            case State::RED:
                cout << "Traffic Light: RED" << endl;
                break;

            case State::GREEN:
                cout << "Traffic Light: GREEN" << endl;
                break;

            case State::YELLOW:
                cout << "Traffic Light: YELLOW" << endl;
                break;
        }

        remaining--;

        if (remaining == 0) {
            switch (current) {
                case State::RED:
                    current = State::GREEN;
                    remaining = 4;
                    break;

                case State::GREEN:
                    current = State::YELLOW;
                    remaining = 2;
                    break;

                case State::YELLOW:
                    current = State::RED;
                    remaining = 5;
                    break;
            }
        }
    }

    return 0;
}
