//Enqueque operation 
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1)
            cout << "Queue is Full!\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " inserted.\n";
        }
    }

    void display() {
        if (front == -1)
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
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.display();
    return 0;
}