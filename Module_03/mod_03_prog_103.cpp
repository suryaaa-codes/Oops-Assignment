// Program 103: Overriding base function
#include <iostream>

using namespace std;
class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding base class function
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived d;
    d.print(); // Calls Derived's print

    return 0;
}



