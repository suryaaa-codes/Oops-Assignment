// Program 137: Binary file read/write
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    int nums[] = {10, 20, 30, 40, 50};
    
    // Write binary
    ofstream outfile("data.bin", ios::binary);
    outfile.write((char*)nums, sizeof(nums));
    outfile.close();

    // Read binary
    int readNums[5];
    ifstream infile("data.bin", ios::binary);
    infile.read((char*)readNums, sizeof(readNums));
    infile.close();

    cout << "Data read from binary file:" << endl;
    for (int i : readNums) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}



