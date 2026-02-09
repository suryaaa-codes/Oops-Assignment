// Program 19: Check leap year
#include <iostream>

using namespace std;
int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Leap year logic:
    // Divisible by 4 AND (NOT divisible by 100 OR divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}



