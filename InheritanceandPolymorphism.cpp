#include <iostream>
#include <string>
using namespace std;

class Sensor {
public:
    virtual float read() = 0;

    virtual string getName() = 0;

    virtual ~Sensor() {}
};

class TemperatureSensor : public Sensor {
public:
    float read() override {
        return 28.5;
    }

    string getName() override {
        return "Temperature Sensor";
    }
};

class LightSensor : public Sensor {
public:
    float read() override {
        return 750.0;
    }

    string getName() override {
        return "Light Sensor";
    }
};

int main() {
    TemperatureSensor temperature;
    LightSensor light;

    Sensor* sensors[2] = {&temperature, &light};

    for (int i = 0; i < 2; i++) {
        cout << "Sensor: " << sensors[i]->getName() << endl;
        cout << "Reading: " << sensors[i]->read() << endl;
        cout << endl;
    }

    return 0;
}
