//Enqueue operation in circular queue
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
            cout << value << " inserted.\n";
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
    cq.enqueue(5);
    cq.enqueue(15);
    cq.enqueue(25);
    cq.display();
    return 0;
}