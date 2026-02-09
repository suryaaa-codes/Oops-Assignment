// Program 163: Terminate handler
#include <iostream>
#include <exception>
#include <cstdlib>

using namespace std;
void myTerminate() {
    cout << "Terminate handler called. Exiting..." << endl;
    abort();
}

int main() {
    set_terminate(myTerminate);
    throw 10; // Uncaught exception will call terminate
    return 0;
}



