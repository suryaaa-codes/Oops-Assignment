// Program 63: Friend function accessing private
#include <iostream>

using namespace std;
class Box {
    int width;
public:
    void setWidth(int w) {
        width = w;
    }
    
    // Friend function declaration
    friend void printWidth(Box box);
};

// Friend function definition
void printWidth(Box box) {
    // Accessing private member directly
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box;
    box.setWidth(10);
    printWidth(box);

    return 0;
}



