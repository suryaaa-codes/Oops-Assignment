// Program 107: Abstract shape class
#include <iostream>

using namespace std;
class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}



