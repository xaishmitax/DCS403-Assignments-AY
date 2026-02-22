#include <iostream>
using namespace std;

#define SIZE 5

class LinearQueue {
    int arr[SIZE];
    int front, rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1)
            cout << "Queue is Full!\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " inserted into queue.\n";
        }
    }

    void dequeue() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty!\n";
        else {
            cout << arr[front] << " removed from queue.\n";
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty!\n";
        else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    LinearQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}