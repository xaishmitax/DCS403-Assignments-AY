//Check full/empty conditions for circular queue
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() { front = rear = -1; }

    bool isFull() { return (rear + 1) % SIZE == front; }
    bool isEmpty() { return front == -1; }

    void enqueue(int val) {
        if (isFull())
            cout << "Queue Full!\n";
        else {
            if (front == -1)
                front = rear = 0;
            else
                rear = (rear + 1) % SIZE;
            arr[rear] = val;
        }
    }

    void dequeue() {
        if (isEmpty())
            cout << "Queue Empty!\n";
        else {
            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % SIZE;
        }
    }
};

int main() {
    CircularQueue cq;
    cout << (cq.isEmpty() ? "Empty\n" : "Not Empty\n");
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cout << (cq.isFull() ? "Full\n" : "Not Full\n");
    cq.dequeue();
    cout << (cq.isEmpty() ? "Empty\n" : "Not Empty\n");
    return 0;
}