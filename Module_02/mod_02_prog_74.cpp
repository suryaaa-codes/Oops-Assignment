// Program 74: Constant member function
#include <iostream>

using namespace std;
class Demo {
    int val;
public:
    Demo(int v = 0) {
        val = v;
    }

    // Constant member function
    int getValue() const {
        // val++; // Error: Cannot modify data member in const function
        return val;
    }

    void setValue(int v) {
        val = v;
    }
};

int main() {
    Demo d(100);
    cout << "Value: " << d.getValue() << endl;
    
    d.setValue(200);
    cout << "New Value: " << d.getValue() << endl;

    return 0;
}



