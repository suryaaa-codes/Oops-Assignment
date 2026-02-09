// Program 154: Exception in constructor
#include <iostream>

using namespace std;
class Test {
public:
    Test() {
        cout << "Constructor called" << endl;
        throw "Exception in Constructor";
    }
};

int main() {
    try {
        Test t;
    } catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}



