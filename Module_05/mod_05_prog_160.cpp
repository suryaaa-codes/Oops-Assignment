// Program 160: Type cast failure (bad_cast)
#include <iostream>
#include <typeinfo>

using namespace std;
class Base { virtual void dummy() {} };
class Derived : public Base { int a; };

int main() {
    try {
        Base b;
        Derived& d = dynamic_cast<Derived&>(b);
    } catch (bad_cast& e) {
        cout << "Bad Cast Exception: " << e.what() << endl;
    }
    return 0;
}



