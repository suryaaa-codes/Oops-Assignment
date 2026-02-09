// Program 48: Area calculation class
#include <iostream>

using namespace std;
class Rectangle {
private:
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    float l, w;

    cout << "Enter length and width: ";
    cin >> l >> w;

    rect.setDimensions(l, w);
    cout << "Area of Rectangle: " << rect.getArea() << endl;

    return 0;
}



