// Program 165: Exception handling in inheritance
#include <iostream>

using namespace std;
class BaseException {};
class DerivedException : public BaseException {};

int main() {
    try {
        throw DerivedException();
    } catch (DerivedException d) {
        cout << "Caught Derived Exception" << endl;
    } catch (BaseException b) {
        cout << "Caught Base Exception" << endl;
    }
    return 0;
}



