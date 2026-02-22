//Check full/Empty conditions
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() { front = rear = -1; }

    bool isFull() { return rear == SIZE - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(int val) {
        if (isFull())
            cout << "Queue Full!\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = val;
        }
    }

    void dequeue() {
        if (isEmpty())
            cout << "Queue Empty!\n";
        else
            front++;
    }
};

int main() {
    Queue q;
    cout << (q.isEmpty() ? "Queue Empty\n" : "Not Empty\n");
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << (q.isFull() ? "Queue Full\n" : "Not Full\n");
    return 0;
}