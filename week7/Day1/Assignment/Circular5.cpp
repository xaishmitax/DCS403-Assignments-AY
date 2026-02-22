//Display Circular Queue
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() { front = rear = -1; }

    void enqueue(int val) {
        if ((rear + 1) % SIZE == front)
            cout << "Queue Full!\n";
        else {
            if (front == -1)
                front = rear = 0;
            else
                rear = (rear + 1) % SIZE;
            arr[rear] = val;
        }
    }

    void display() {
        if (front == -1)
            cout << "Queue Empty!\n";
        else {
            cout << "Circular Queue elements: ";
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear)
                    break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.display();
    return 0;
}