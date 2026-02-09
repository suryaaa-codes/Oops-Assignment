// Program 67: Add complex numbers (friend)
#include <iostream>

using namespace std;
class Complex {
    float real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    friend Complex addComplex(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);
    Complex c3;

    c3 = addComplex(c1, c2);

    cout << "C1 = "; c1.display();
    cout << "C2 = "; c2.display();
    cout << "Sum = "; c3.display();

    return 0;
}



