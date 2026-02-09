// Program 70: Swap private values (friend)
#include <iostream>

using namespace std;
class Class2; // Forward declaration

class Class1 {
    int value1;
public:
    Class1(int v) : value1(v) {}
    void display() { cout << "Class1 Value: " << value1 << endl; }
    friend void swap(Class1 &, Class2 &);
};

class Class2 {
    int value2;
public:
    Class2(int v) : value2(v) {}
    void display() { cout << "Class2 Value: " << value2 << endl; }
    friend void swap(Class1 &, Class2 &);
};

void swap(Class1 &c1, Class2 &c2) {
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main() {
    Class1 c1(100);
    Class2 c2(200);

    cout << "Before Swap:" << endl;
    c1.display();
    c2.display();

    swap(c1, c2);

    cout << "After Swap:" << endl;
    c1.display();
    c2.display();

    return 0;
}



