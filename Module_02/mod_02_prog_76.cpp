// Program 76: ADT Queue
#include <iostream>
using namespace std;
#define MAX 10

class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = val;
            cout << val << " enqueued" << endl;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return -1;
        } else {
            int val = arr[front++];
            return val;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << " dequeued" << endl;
    cout << q.dequeue() << " dequeued" << endl;

    return 0;
}



