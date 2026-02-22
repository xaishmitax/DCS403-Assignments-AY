//Insert after given value
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAfterValue(Node* head, int X, int Y) {
    Node* temp = head;
    while (temp != NULL && temp->data != X)
        temp = temp->next;

    if (temp == NULL)
        cout << X << " not found in list.\n";
    else {
        Node* newNode = new Node{Y, temp->next};
        temp->next = newNode;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    cout << "Original List: ";
    printList(head);
    insertAfterValue(head, 20, 25);
    cout << "After insertion: ";
    printList(head);
    return 0;
}