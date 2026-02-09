// Program 88: Access base members from derived
#include <iostream>

using namespace std;
class Base {
public:
    void display() {
        cout << "Base class display function." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Accessing base class member
    d.show();

    return 0;
}



