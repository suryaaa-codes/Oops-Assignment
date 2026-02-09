// Program 45: Arithmetic operations class
#include <iostream>

using namespace std;
class MathOps {
private:
    float num1, num2;

public:
    void setNumbers(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() { return num1 + num2; }
    float subtract() { return num1 - num2; }
    float multiply() { return num1 * num2; }
    float divide() {
        if (num2 != 0) return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    MathOps op;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    op.setNumbers(a, b);

    cout << "Sum: " << op.add() << endl;
    cout << "Difference: " << op.subtract() << endl;
    cout << "Product: " << op.multiply() << endl;
    cout << "Quotient: " << op.divide() << endl;

    return 0;
}



