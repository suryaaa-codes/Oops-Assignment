// Program 62: Local vs member variables (this)
#include <iostream>

using namespace std;
class Test {
    int a;
public:
    void setA(int a) {
        this->a = a; // this->a refers to member, a refers to parameter
    }

    void show() {
        int a = 10; // Local variable
        cout << "Local a: " << a << endl;
        cout << "Member a (this->a): " << this->a << endl;
    }
};

int main() {
    Test t;
    t.setA(50);
    t.show();

    return 0;
}



