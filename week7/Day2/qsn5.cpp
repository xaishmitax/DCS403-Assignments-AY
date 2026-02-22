//Deletion of Element by value
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteByValue(Node*& head, int X) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == X) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    while (curr->next != NULL && curr->next->data != X)
        curr = curr->next;

    if (curr->next == NULL)
        cout << X << " not found in list.\n";
    else {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
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
    deleteByValue(head, 20);
    cout << "After deletion: ";
    printList(head);
    return 0;
}