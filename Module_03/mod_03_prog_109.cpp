// Program 109: Static vs dynamic binding
#include <iostream>

using namespace std;
class Base {
public:
    void staticBinding() {
        cout << "Base Static Binding" << endl;
    }
    virtual void dynamicBinding() {
        cout << "Base Dynamic Binding" << endl;
    }
};

class Derived : public Base {
public:
    void staticBinding() {
        cout << "Derived Static Binding" << endl;
    }
    void dynamicBinding() {
        cout << "Derived Dynamic Binding" << endl;
    }
};

int main() {
    Base* ptr = new Derived();

    // Static Binding: Compile time decision based on pointer type
    ptr->staticBinding(); // Calls Base::staticBinding

    // Dynamic Binding: Runtime decision based on object type
    ptr->dynamicBinding(); // Calls Derived::dynamicBinding

    delete ptr;
    return 0;
}



