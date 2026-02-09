// Program 29: Program demonstrating break and continue
#include <iostream>

using namespace std;
int main() {
    cout << "Demonstrating break and continue:" << endl;

    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            cout << "Skipping 5 using continue." << endl;
            continue; // Skip the rest of the loop body for i=5
        }
        if (i == 8) {
            cout << "Breaking loop at 8." << endl;
            break; // Exit the loop when i=8
        }
        cout << "Value: " << i << endl;
    }

    return 0;
}



