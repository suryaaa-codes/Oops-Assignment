// Program 106: Virtual function call mechanism
#include <iostream>

using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base Show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived Show" << endl;
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;

    // V-Table mechanism is used here to call the correct function
    b->show();

    return 0;
}



