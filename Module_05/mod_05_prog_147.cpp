// Program 147: Multiple catch blocks
#include <iostream>

using namespace std;
int main() {
    try {
        int choice;
        cout << "Enter 1 (int), 2 (double), 3 (char): ";
        cin >> choice;

        if (choice == 1) throw 10;
        else if (choice == 2) throw 20.5;
        else if (choice == 3) throw 'A';
        else cout << "No exception thrown." << endl;

    } catch (int i) {
        cout << "Caught Integer: " << i << endl;
    } catch (double d) {
        cout << "Caught Double: " << d << endl;
    } catch (char c) {
        cout << "Caught Character: " << c << endl;
    }

    return 0;
}



