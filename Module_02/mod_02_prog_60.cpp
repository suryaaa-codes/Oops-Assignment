// Program 60: Init static data members
#include <iostream>

using namespace std;
class SharedData {
public:
    static int sharedValue;

    void display() {
        cout << "Shared Value: " << sharedValue << endl;
    }
};

// Initialize static member outside class
int SharedData::sharedValue = 10;

int main() {
    SharedData d1, d2;

    d1.display();
    d2.display();

    d1.sharedValue = 20; // Change affects all objects

    cout << "After modification:" << endl;
    d1.display();
    d2.display();

    return 0;
}



