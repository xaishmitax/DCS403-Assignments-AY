// QSN 7: Program to build a BST using user input and display inorder traversal

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

// Inorder traversal
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
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

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}