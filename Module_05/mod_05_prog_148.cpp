// Program 148: Catch all exceptions (...)
#include <iostream>

using namespace std;
int main() {
    try {
        throw "Unknown error occurred";
    } catch (int i) {
        cout << "Caught int" << endl;
    } catch (...) {
        cout << "Caught unknown exception." << endl;
    }

    return 0;
}



