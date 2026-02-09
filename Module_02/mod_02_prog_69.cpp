// Program 69: Friendship not mutual
#include <iostream>

using namespace std;
class A {
    int x = 10;
    friend class B; // B is friend of A
};

class B {
public:
    void showA(A& a) {
        cout << "B accessing A's private x: " << a.x << endl;
    }
    // A cannot access B's private members unless A is also a friend of B
};

class C {
public:
    void tryAccessA(A& a) {
        // cout << a.x; // Error: C is not a friend of A
        cout << "C cannot access A's private members." << endl;
    }
};

int main() {
    A a;
    B b;
    C c;

    b.showA(a);
    c.tryAccessA(a);

    return 0;
}



