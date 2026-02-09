// Program 50: Count objects (static var)
#include <iostream>


using namespace std;
class Counter {
private:
    static int objectCount;

public:
    Counter() {
        objectCount++;
    }

    static void showCount() {
        cout << "Number of objects created: " << objectCount << endl;
    }
};

// Initialize static member
int Counter::objectCount = 0;

int main() {
    Counter::showCount();

    Counter c1;
    Counter c2;
    Counter c3;

    Counter::showCount();

    return 0;
}



