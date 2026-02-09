// Program 6: Calculate simple interest
#include <iostream>

using namespace std;
int main() {
    float principal, rate, time, simpleInterest;

    // Input principal, rate, and time
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}



