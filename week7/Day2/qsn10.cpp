//print elemnts in reverse using recursion
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    cout << "List in reverse order: ";
    printReverse(head);
    cout << endl;
    return 0;
}