// Program 105: Base pointer calling derived function
#include <iostream>

using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    // Calling derived function using base pointer (requires virtual function)
    bptr->show();

    return 0;
}



