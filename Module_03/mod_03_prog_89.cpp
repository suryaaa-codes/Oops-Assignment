// Program 89: Ambiguity in multiple inheritance
#include <iostream>

using namespace std;
class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B {
public:
    void show() { cout << "Class B" << endl; }
};

class C : public A, public B {
};

int main() {
    C obj;
    // obj.show(); // Error: Ambiguous - which show() to call?
    
    // Resolving ambiguity
    obj.A::show();
    obj.B::show();

    return 0;
}



