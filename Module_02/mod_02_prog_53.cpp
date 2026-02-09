// Program 53: Multiple constructors
#include <iostream>

using namespace std;
class Rectangle {
private:
    int length, width;

public:
    // Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized Constructor (Square)
    Rectangle(int side) {
        length = side;
        width = side;
        cout << "Square Constructor" << endl;
    }

    // Parameterized Constructor (Rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Rectangle Constructor" << endl;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    cout << "Area: " << r1.area() << endl;

    Rectangle r2(5);
    cout << "Area: " << r2.area() << endl;

    Rectangle r3(4, 6);
    cout << "Area: " << r3.area() << endl;

    return 0;
}



