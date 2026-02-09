// Program 158: Array index out of bounds
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
int main() {
    vector<int> v = {1, 2, 3};
    try {
        // Accessing out of bounds
        cout << v.at(5) << endl;
    } catch (out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}



