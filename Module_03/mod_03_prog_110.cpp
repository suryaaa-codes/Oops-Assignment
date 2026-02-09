// Program 110: Implications of polymorphism
#include <iostream>

using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a Square." << endl;
    }
};

// Function using polymorphism
void render(Shape* s) {
    s->draw();
}

int main() {
    Circle c;
    Square sq;

    // Same function call behaves differently based on object passed
    render(&c);
    render(&sq);

    return 0;
}



