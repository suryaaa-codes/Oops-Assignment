// Program 145: Stream class hierarchy demo
#include <iostream>
#include <fstream>

using namespace std;
// This program conceptually demonstrates the hierarchy by using different stream objects
// ios -> istream/ostream -> iostream -> fstream

int main() {
    cout << "Stream Class Hierarchy Demonstration" << endl;
    cout << "1. ios (Base class)" << endl;
    cout << "2. istream (Input stream) -> cin" << endl;
    cout << "3. ostream (Output stream) -> cout" << endl;
    cout << "4. iostream (Input/Output stream)" << endl;
    cout << "5. ifstream (File input stream)" << endl;
    cout << "6. ofstream (File output stream)" << endl;
    cout << "7. fstream (File I/O stream)" << endl;

    // Using ostream
    ostream& out = cout;
    out << "This is printed using an ostream reference to cout." << endl;

    return 0;
}



