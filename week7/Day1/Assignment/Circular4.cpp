//Peek/Front Elemnt in circular Queue
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

    void peek() {
        if (front == -1)
            cout << "Queue Empty!\n";
        else
            cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(100);
    cq.enqueue(200);
    cq.peek();
    return 0;
}