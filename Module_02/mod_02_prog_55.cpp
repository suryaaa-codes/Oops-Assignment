// Program 55: Constructor overloading
#include <iostream>

using namespace std;
class Complex {
private:
    float real, imag;

public:
    // Constructor with no arguments
    Complex() {
        real = 0;
        imag = 0;
    }

    // Constructor with one argument
    Complex(float r) {
        real = r;
        imag = 0;
    }

    // Constructor with two arguments
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(5.5);
    Complex c3(2.3, 4.5);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}



