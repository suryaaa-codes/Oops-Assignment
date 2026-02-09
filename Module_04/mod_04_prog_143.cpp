// Program 143: Split file into two
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int main() {
    // Create a file with multiple lines
    ofstream f("source.txt");
    f << "Line 1\nLine 2\nLine 3\nLine 4\n";
    f.close();

    ifstream source("source.txt");
    ofstream part1("part1.txt");
    ofstream part2("part2.txt");
    string line;
    vector<string> lines;

    if (source.is_open()) {
        while (getline(source, line)) {
            lines.push_back(line);
        }
        source.close();

        int mid = lines.size() / 2;
        for (int i = 0; i < mid; i++) {
            part1 << lines[i] << "\n";
        }
        for (size_t i = mid; i < lines.size(); i++) {
            part2 << lines[i] << "\n";
        }
        cout << "File split successfully." << endl;
        part1.close();
        part2.close();
    } else {
        cout << "Error opening source file." << endl;
    }

    return 0;
}



