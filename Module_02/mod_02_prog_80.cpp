// Program 80: Dynamic object creation (new/delete)
#include <iostream>

using namespace std;
class Sample {
public:
    Sample() {
        cout << "Constructor called" << endl;
    }
    ~Sample() {
        cout << "Destructor called" << endl;
    }
    void display() {
        cout << "Hello from dynamically created object!" << endl;
    }
};

int main() {
    // Dynamic object creation
    Sample* ptr = new Sample();

    ptr->display();

    // Delete object
    delete ptr;

    return 0;
}



