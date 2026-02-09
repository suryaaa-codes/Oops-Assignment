// Program 81: Single inheritance
#include <iostream>

using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat(); // Inherited from Animal
    d.bark(); // Defined in Dog

    return 0;
}



