// Program 52: Parameterized constructor
#include <iostream>

using namespace std;
class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
        cout << "Parameterized Constructor Called! Point(" << x << ", " << y << ")" << endl;
    }

    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();

    Point p2(5, 15);
    p2.display();

    return 0;
}



