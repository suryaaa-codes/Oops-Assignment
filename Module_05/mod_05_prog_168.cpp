// Program 168: Resource Acquisition Is Initialization (RAII)
#include <iostream>

using namespace std;
class Resource {
public:
    Resource() { cout << "Resource Acquired" << endl; }
    ~Resource() { cout << "Resource Released" << endl; }
};

int main() {
    try {
        Resource r;
        throw 1;
    } catch (int) {
        cout << "Exception Caught" << endl;
    }
    return 0;
}



