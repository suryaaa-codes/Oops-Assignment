// Program 149: Throwing integer exception
#include <iostream>

using namespace std;
void test(int x) {
    if (x == 0) throw x; // Throw int
    else cout << "Value: " << x << endl;
}

int main() {
    try {
        test(0);
    } catch (int e) {
        cout << "Caught exception: " << e << endl;
    }
    return 0;
}



