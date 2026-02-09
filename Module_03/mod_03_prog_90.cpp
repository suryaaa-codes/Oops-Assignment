// Program 90: Resolve ambiguity (scope resolution)
#include <iostream>

using namespace std;
class A {
public:
    void display() { cout << "Display from Class A" << endl; }
};

class B {
public:
    void display() { cout << "Display from Class B" << endl; }
};

class C : public A, public B {
public:
    void display() {
        A::display(); // Call A's display
        B::display(); // Call B's display
        cout << "Display from Class C" << endl;
    }
};

int main() {
    C obj;
    obj.display();

    return 0;
}



