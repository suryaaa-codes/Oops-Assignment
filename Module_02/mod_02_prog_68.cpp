// Program 68: Compare private data (friend)
#include <iostream>

using namespace std;
class Class2; // Forward declaration

class Class1 {
    int value1;
public:
    Class1(int v) : value1(v) {}
    friend void compare(Class1, Class2);
};

class Class2 {
    int value2;
public:
    Class2(int v) : value2(v) {}
    friend void compare(Class1, Class2);
};

void compare(Class1 c1, Class2 c2) {
    if (c1.value1 > c2.value2)
        cout << "Value in Class1 is greater." << endl;
    else if (c2.value2 > c1.value1)
        cout << "Value in Class2 is greater." << endl;
    else
        cout << "Values are equal." << endl;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);
    compare(obj1, obj2);

    return 0;
}



