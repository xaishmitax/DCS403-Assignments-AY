// QSN 1: Recursive search in Binary Search Tree using user input

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
    if (root == nullptr)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Recursive search
Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return recursiveSearch(root->left, key);
    return recursiveSearch(root->right, key);
}

int main() {
    Node* root = nullptr;
    int n, val, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter key to search: ";
    cin >> key;

    if (recursiveSearch(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}