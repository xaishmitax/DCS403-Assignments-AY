// QSN 5: Find minimum and maximum value in BST

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

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

Node* findMin(Node* root) {
    while (root->left)
        root = root->left;
    return root;
}

Node* findMax(Node* root) {
    while (root->right)
        root = root->right;
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

    cout << "Minimum: " << findMin(root)->data << endl;
    cout << "Maximum: " << findMax(root)->data << endl;

    return 0;
}