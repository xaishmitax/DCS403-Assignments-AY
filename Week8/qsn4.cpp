// QSN 4: Iterative insertion in Binary Search Tree

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* n = new Node();
    n->data = value;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

Node* insert(Node* root, int value) {
    if (!root)
        return createNode(value);

    Node* curr = root;
    Node* parent = nullptr;

    while (curr) {
        parent = curr;
        if (value < curr->data)
            curr = curr->left;
        else if (value > curr->data)
            curr = curr->right;
        else
            return root;
    }

    if (value < parent->data)
        parent->left = createNode(value);
    else
        parent->right = createNode(value);

    return root;
}

int main() {
    Node* root = nullptr;
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "BST created successfully";
    return 0;
}