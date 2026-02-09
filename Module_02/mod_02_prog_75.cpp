// Program 75: ADT Stack
#include <iostream>
using namespace std;
#define MAX 10

class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    void push(int val) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = val;
            cout << val << " pushed into stack" << endl;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int val = arr[top--];
            return val;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " popped from stack" << endl;
    cout << s.pop() << " popped from stack" << endl;

    return 0;
}



