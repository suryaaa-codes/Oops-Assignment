// Program 57: Constructor execution order
#include <iostream>

using namespace std;
class A {
public:
    A() { cout << "Constructor A" << endl; }
    ~A() { cout << "Destructor A" << endl; }
};

class B {
public:
    B() { cout << "Constructor B" << endl; }
    ~B() { cout << "Destructor B" << endl; }
};

class C {
    A a;
    B b;
public:
    C() { cout << "Constructor C" << endl; }
    ~C() { cout << "Destructor C" << endl; }
};

int main() {
    C obj;
    return 0;
}



