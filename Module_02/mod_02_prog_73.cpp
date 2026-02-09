// Program 73: Constant object
#include <iostream>

using namespace std;
class Time {
    int hours;
    int minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    // Const member function required for const objects
    void display() const {
        cout << hours << ":" << minutes << endl;
    }
};

int main() {
    const Time t(12, 30); // Constant object
    t.display();

    // t.hours = 10; // Error: Cannot modify const object
    
    return 0;
}



