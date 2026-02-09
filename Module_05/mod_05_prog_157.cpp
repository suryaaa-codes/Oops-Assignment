// Program 157: Custom exception class
#include <iostream>
#include <exception>

using namespace std;
class MyCustomException : public exception {
public:
    const char* what() const throw() {
        return "My Custom Exception Occurred!";
    }
};

int main() {
    try {
        throw MyCustomException();
    } catch (MyCustomException& e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}



