// Program 84: Hierarchical inheritance
#include <iostream>

using namespace std;
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle." << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle." << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.display();
    r.area();

    c.display();
    c.area();

    return 0;
}



