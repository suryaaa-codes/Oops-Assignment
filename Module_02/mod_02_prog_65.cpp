// Program 65: Friend class
#include <iostream>

using namespace std;
class A {
    int x;
public:
    A() { x = 10; }
    friend class B; // Class B is a friend of Class A
};

class B {
public:
    void display(A& a) {
        cout << "Value of x in Class A: " << a.x << endl;
    }
};

int main() {
    A a;
    B b;
    b.display(a);
    return 0;
}



