//Creation and Traversal
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to create linked list from array
Node* createList(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = new Node{arr[0], NULL};
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node{arr[i], NULL};
        temp = temp->next;
    }
    return head;
}

// function to traverse and print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    Node* head = createList(arr, 5);
    cout << "Linked List elements: ";
    printList(head);
    return 0;
}