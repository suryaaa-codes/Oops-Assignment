// Program 51: Default constructor
#include <iostream>

using namespace std;
class Demo {
public:
    // Default Constructor
    Demo() {
        cout << "Default Constructor Called!" << endl;
    }
};

int main() {
    Demo d1; // Constructor called here
    Demo d2; // Constructor called again

    return 0;
}



