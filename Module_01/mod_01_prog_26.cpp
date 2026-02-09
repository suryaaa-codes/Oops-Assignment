// Program 26: Program using for loop to print series
#include <iostream>

using namespace std;
int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Series (1 to " << n << "): ";
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}



