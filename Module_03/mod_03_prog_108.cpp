// Program 108: Polymorphic array of objects
#include <iostream>

using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base Display" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() {
        cout << "Derived1 Display" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() {
        cout << "Derived2 Display" << endl;
    }
};

int main() {
    Base* arr[3];
    Base b;
    Derived1 d1;
    Derived2 d2;

    arr[0] = &b;
    arr[1] = &d1;
    arr[2] = &d2;

    for (int i = 0; i < 3; i++) {
        arr[i]->display();
    }

    return 0;
}



