// Program 101: Late binding
#include <iostream>

using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base Display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    // Late binding: Function to call is determined at runtime
    basePtr->display();

    return 0;
}



