// Program 124: Formatted output (setw, setprecision)
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    double pi = 3.1415926535;
    cout << "Default: " << pi << endl;
    cout << "Setprecision(4): " << setprecision(4) << pi << endl;
    cout << "Setw(10): " << setw(10) << 12345 << endl;
    cout << "Setfill('*') and Setw(10): " << setfill('*') << setw(10) << 12345 << endl;
    return 0;
}



