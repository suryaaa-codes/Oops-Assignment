// Program 155: Exception in destructor
#include <iostream>

using namespace std;
class Test {
public:
    ~Test() {
        // Destructors should generally not throw exceptions
        // But for demonstration:
        cout << "Destructor called" << endl;
        try {
            throw "Exception in Destructor";
        } catch (const char* msg) {
            cout << "Caught inside destructor: " << msg << endl;
        }
    }
};

int main() {
    Test t;
    return 0;
}



