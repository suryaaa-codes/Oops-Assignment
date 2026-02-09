// Program 78: ADT Polynomial
#include <iostream>

using namespace std;
class Polynomial {
    int coeff[10]; // Assuming max degree 9
    int degree;
public:
    Polynomial() {
        degree = 0;
        for (int i = 0; i < 10; i++) coeff[i] = 0;
    }

    void setDegree(int d) { degree = d; }

    void setCoeff(int power, int c) {
        if (power >= 0 && power < 10)
            coeff[power] = c;
    }

    void display() {
        for (int i = degree; i >= 0; i--) {
            if (coeff[i] != 0) {
                cout << coeff[i] << "x^" << i;
                if (i > 0) cout << " + ";
            }
        }
        cout << endl;
    }
};

int main() {
    Polynomial p;
    p.setDegree(3);
    p.setCoeff(3, 4); // 4x^3
    p.setCoeff(1, 2); // 2x^1
    p.setCoeff(0, 5); // 5

    cout << "Polynomial: ";
    p.display();

    return 0;
}



