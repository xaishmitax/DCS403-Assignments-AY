//Count number of nodes
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    cout << "Number of nodes: " << countNodes(head) << endl;
    return 0;
}