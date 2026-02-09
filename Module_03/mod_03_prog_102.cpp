// Program 102: Virtual destructor
#include <iostream>

using namespace std;
class Base {
public:
    Base() { cout << "Base Constructor" << endl; }
    virtual ~Base() { cout << "Base Destructor" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor" << endl; }
    ~Derived() { cout << "Derived Destructor" << endl; }
};

int main() {
    Base* b = new Derived();
    delete b; // Virtual destructor ensures Derived destructor is called

    return 0;
}



