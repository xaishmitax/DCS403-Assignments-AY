//Display Queue Elemnts
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() { front = rear = -1; }

    void enqueue(int val) {
        if (rear == SIZE - 1)
            cout << "Queue Full!\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = val;
        }
    }

    void display() {
        if (front == -1 || front > rear)
            cout << "Queue Empty!\n";
        else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.display();
    return 0;
}