// Program 162: Unexpected exception
#include <iostream>
#include <exception>

using namespace std;
void myUnexpected() {
    cout << "Unexpected exception occurred!" << endl;
    terminate();
}

int main() {
    set_unexpected(myUnexpected);
    try {
        throw "Unknown";
    } catch (int) {
        // Won't catch string
    } catch (...) {
        cout << "Caught in main" << endl;
    }
    return 0;
}



