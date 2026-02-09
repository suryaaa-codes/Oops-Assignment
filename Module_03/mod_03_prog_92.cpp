// Program 92: Destructor order in inheritance
#include <iostream>

using namespace std;
class Base {
public:
    Base() {
        cout << "Base Constructor Called" << endl;
    }
    ~Base() {
        cout << "Base Destructor Called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor Called" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating Derived object:" << endl;
    {
        Derived d;
    } // d goes out of scope here
    cout << "Object destroyed." << endl;

    return 0;
}



