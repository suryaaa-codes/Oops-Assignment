// Program 161: Function specifying throw list
#include <iostream>

using namespace std;
// Note: Dynamic exception specifications are deprecated in C++11 and removed in C++17
// This is for demonstration of the concept as per syllabus
void test() throw(int) {
    throw 10;
}

int main() {
    try {
        test();
    } catch (int i) {
        cout << "Caught: " << i << endl;
    }
    return 0;
}



