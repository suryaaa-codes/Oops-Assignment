// Program 61: This pointer demo
#include <iostream>

using namespace std;
class Example {
    int x;
public:
    void setX(int x) {
        // 'this' pointer distinguishes member variable from local variable
        this->x = x;
    }

    void display() {
        cout << "Value of x: " << this->x << endl;
        cout << "Address of current object (this): " << this << endl;
    }
};

int main() {
    Example obj;
    obj.setX(100);
    obj.display();

    return 0;
}



