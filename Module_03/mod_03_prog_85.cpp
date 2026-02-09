// Program 85: Hybrid inheritance
#include <iostream>

using namespace std;
class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B : public A {
public:
    void showB() { cout << "Class B" << endl; }
};

class C {
public:
    void showC() { cout << "Class C" << endl; }
};

// D inherits from B (which inherits from A) and C
class D : public B, public C {
public:
    void showD() { cout << "Class D" << endl; }
};

int main() {
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}



