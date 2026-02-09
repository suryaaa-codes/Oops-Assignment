// Program 46: Compare two objects
#include <iostream>

using namespace std;
class Box {
public:
    int volume;

    void setVolume(int v) {
        volume = v;
    }

    bool isLargerThan(Box b) {
        return this->volume > b.volume;
    }
};

int main() {
    Box box1, box2;
    box1.setVolume(50);
    box2.setVolume(30);

    if (box1.isLargerThan(box2)) {
        cout << "Box1 is larger than Box2." << endl;
    } else {
        cout << "Box1 is not larger than Box2." << endl;
    }

    return 0;
}



