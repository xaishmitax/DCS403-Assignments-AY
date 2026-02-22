//Searching an element
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to search element X
void searchElement(Node* head, int X) {
    int pos = 1;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == X) {
            cout << X << " found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << X << " not found in list." << endl;
}

int main() {
    // creating list manually
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    searchElement(head, 20);
    searchElement(head, 50);
    return 0;
}