// Program 100: Pure virtual function & abstract class
#include <iostream>


using namespace std;
// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    Rectangle rect;
    rect.draw();

    return 0;
}



