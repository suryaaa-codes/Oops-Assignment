// Program 99: Virtual function
#include <iostream>

using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;

    s->draw(); // Calls Circle's draw()

    return 0;
}



