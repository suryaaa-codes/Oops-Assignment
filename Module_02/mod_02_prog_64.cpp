// Program 64: Common friend for two classes
#include <iostream>

using namespace std;
class ClassB; // Forward declaration

class ClassA {
    int numA;
public:
    ClassA() : numA(12) {}
    friend int add(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    ClassB() : numB(20) {}
    friend int add(ClassA, ClassB);
};

// Common friend function
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB) << endl;
    return 0;
}



