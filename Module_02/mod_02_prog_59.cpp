// Program 59: Init const members in constructor
#include <iostream>

using namespace std;
class Constants {
    const int MAX_VAL;
public:
    // Const members must be initialized in initializer list
    Constants(int val) : MAX_VAL(val) {
        // MAX_VAL = val; // Error: assignment of read-only member
    }

    void display() {
        cout << "Max Value: " << MAX_VAL << endl;
    }
};

int main() {
    Constants obj(100);
    obj.display();

    return 0;
}



