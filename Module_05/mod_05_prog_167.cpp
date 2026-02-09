// Program 167: Exception safety levels
#include <iostream>

using namespace std;
class Safe {
    int* ptr;
public:
    Safe() { ptr = new int(10); }
    ~Safe() { delete ptr; cout << "Resource freed." << endl; }
    
    void process() {
        cout << "Processing..." << endl;
        throw "Error";
    }
};

int main() {
    try {
        Safe s;
        s.process();
    } catch (const char* msg) {
        cout << "Caught: " << msg << endl;
    }
    return 0;
}



