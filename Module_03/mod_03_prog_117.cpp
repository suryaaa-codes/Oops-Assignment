// Program 117: Multiple classes with composition
#include <iostream>

using namespace std;
class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Car {
    Engine eng; // Composition: Car has an Engine
public:
    void startCar() {
        eng.start();
        cout << "Car started." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();

    return 0;
}



