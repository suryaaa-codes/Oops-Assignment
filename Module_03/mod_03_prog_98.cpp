// Program 98: Runtime polymorphism
#include <iostream>

using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    // Runtime polymorphism: calls Derived's show()
    bptr->show();

    return 0;
}



