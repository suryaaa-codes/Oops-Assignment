// Program 156: Standard exception (std::exception)
#include <iostream>
#include <exception>

using namespace std;
int main() {
    try {
        // Throwing a standard exception
        throw exception();
    } catch (exception& e) {
        cout << "Standard Exception Caught: " << e.what() << endl;
    }
    return 0;
}



