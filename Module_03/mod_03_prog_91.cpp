// Program 91: Constructor order in inheritance
#include <iostream>

using namespace std;
class Base {
public:
    Base() {
        cout << "Base Constructor Called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor Called" << endl;
    }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived d;

    return 0;
}



