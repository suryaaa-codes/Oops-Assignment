// Program 159: Memory allocation failure (bad_alloc)
#include <iostream>
#include <new>

using namespace std;
int main() {
    try {
        // Attempting to allocate a huge amount of memory
        long long* ptr = new long long[1000000000000];
    } catch (bad_alloc& e) {
        cout << "Memory Allocation Failed: " << e.what() << endl;
    }
    return 0;
}



