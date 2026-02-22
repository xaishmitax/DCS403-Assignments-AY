//peek/front element
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() { front = rear = -1; }

    void enqueue(int value) {
        if (rear == SIZE - 1)
            cout << "Queue Full!\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = value;
        }
    }

    void peek() {
        if (front == -1 || front > rear)
            cout << "Queue Empty!\n";
        else
            cout << "Front element is: " << arr[front] << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(100);
    q.enqueue(200);
    q.peek();
    return 0;
}