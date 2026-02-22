//Deletion at given position
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL || curr->next == NULL) {
        cout << "Invalid position.\n";
        return;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, NULL}}}};
    cout << "Original List: ";
    printList(head);
    deleteAtPosition(head, 3);
    cout << "After deletion: ";
    printList(head);
    return 0;
}