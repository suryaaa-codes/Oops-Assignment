// Program 170: Comprehensive exception handling demo
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
void process(int value) {
    if (value < 0) throw invalid_argument("Negative value not allowed");
    if (value == 0) throw runtime_error("Zero value error");
    cout << "Processed: " << value << endl;
}

int main() {
    vector<int> inputs = {10, -5, 0, 20};

    for (int val : inputs) {
        try {
            process(val);
        } catch (const invalid_argument& e) {
            cout << "Invalid Argument: " << e.what() << endl;
        } catch (const runtime_error& e) {
            cout << "Runtime Error: " << e.what() << endl;
        } catch (...) {
            cout << "Unknown Error" << endl;
        }
    }

    return 0;
}



