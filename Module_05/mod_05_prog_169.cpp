// Program 169: Smart pointers and exceptions
#include <iostream>
#include <memory>

using namespace std;
class Test {
public:
    Test() { cout << "Test Created" << endl; }
    ~Test() { cout << "Test Destroyed" << endl; }
};

int main() {
    try {
        unique_ptr<Test> ptr(new Test());
        throw "Exception";
    } catch (...) {
        cout << "Caught exception, smart pointer should have cleaned up." << endl;
    }
    return 0;
}



