//Dequeue operation
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

    void dequeue() {
        if (front == -1 || front > rear)
            cout << "Queue Empty!\n";
        else {
            cout << arr[front] << " deleted.\n";
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear)
            cout << "Queue Empty!\n";
        else {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}