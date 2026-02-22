//Dequeue operation in Circular Queue
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() { front = rear = -1; }

    void enqueue(int value) {
        if ((rear + 1) % SIZE == front)
            cout << "Queue Full!\n";
        else {
            if (front == -1)
                front = rear = 0;
            else
                rear = (rear + 1) % SIZE;
            arr[rear] = value;
        }
    }

    void dequeue() {
        if (front == -1)
            cout << "Queue Empty!\n";
        else {
            cout << arr[front] << " deleted.\n";
            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1)
            cout << "Queue Empty!\n";
        else {
            int i = front;
            cout << "Queue: ";
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display();
    cq.dequeue();
    cq.display();
    return 0;
}