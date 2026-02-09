// Program 66: Operator overloading (friend)
#include <iostream>

using namespace std;
class Space {
    int x, y, z;
public:
    void getdata(int a, int b, int c) {
        x = a; y = b; z = c;
    }
    void display() {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
    }
    // Overload unary minus using friend function
    friend void operator-(Space &s);
};

void operator-(Space &s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main() {
    Space s;
    s.getdata(10, -20, 30);
    cout << "S: ";
    s.display();

    -s; // Activate operator-() function
    cout << "-S: ";
    s.display();

    return 0;
}



