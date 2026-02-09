// Program 15: Demonstrate bitwise operators
#include <iostream>

using namespace std;
int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    cout << "a = " << a << ", b = " << b << endl;

    cout << "Bitwise AND (a & b): " << (a & b) << endl; // 0001 -> 1
    cout << "Bitwise OR (a | b): " << (a | b) << endl;  // 0111 -> 7
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl; // 0110 -> 6
    cout << "Bitwise NOT (~a): " << (~a) << endl;       // ...1010 -> -6 (2's complement)
    cout << "Left Shift (a << 1): " << (a << 1) << endl;// 1010 -> 10
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;// 0010 -> 2

    return 0;
}



