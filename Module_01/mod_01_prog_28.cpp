// Program 28: Program using do-while to print number series
#include <iostream>

using namespace std;
int main() {
    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Odd numbers series (1 to " << n << "): ";
    do {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
    cout << endl;

    return 0;
}



