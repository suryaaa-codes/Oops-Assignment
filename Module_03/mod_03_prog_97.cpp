// Program 97: Operator overloading
#include <iostream>

using namespace std;
class Count {
    int value;
public:
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;
    ++count1;
    count1.display();

    return 0;
}



