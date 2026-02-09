// Program 144: Formatted I/O with manipulators
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    double num = 123.456789;
    cout << "Original: " << num << endl;
    cout << "Fixed: " << fixed << num << endl;
    cout << "Scientific: " << scientific << num << endl;
    cout << "Hex (255): " << hex << 255 << endl;
    cout << "Oct (255): " << oct << 255 << endl;
    cout << "Dec (255): " << dec << 255 << endl;
    cout << "Showpos: " << showpos << 100 << noshowpos << endl;
    cout << "Left aligned (width 10): |" << left << setw(10) << "Hello" << "|" << endl;
    cout << "Right aligned (width 10): |" << right << setw(10) << "Hello" << "|" << endl;

    return 0;
}



