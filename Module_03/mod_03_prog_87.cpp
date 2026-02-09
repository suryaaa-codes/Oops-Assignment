// Program 87: Protected inheritance
#include <iostream>

using namespace std;
class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
};

class Derived : protected Base {
public:
    void show() {
        cout << "Public in Base becomes Protected in Derived: " << pub << endl;
        cout << "Protected in Base remains Protected in Derived: " << prot << endl;
    }
};

int main() {
    Derived d;
    d.show();
    // d.pub; // Error: pub is protected in Derived
    return 0;
}



