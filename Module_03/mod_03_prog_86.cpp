// Program 86: Private inheritance
#include <iostream>

using namespace std;
class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class Derived : private Base {
public:
    void show() {
        cout << "Public in Base becomes Private in Derived: " << pub << endl;
        cout << "Protected in Base becomes Private in Derived: " << prot << endl;
        // cout << priv; // Error: Private member of Base not accessible
    }
};

int main() {
    Derived d;
    d.show();
    // d.pub; // Error: pub is private in Derived
    return 0;
}



