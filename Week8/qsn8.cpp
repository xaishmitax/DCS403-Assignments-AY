// QSN 8: Program to search a value in BST after deletion using user input

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

Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Search function
Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    int n, val, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter value to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Enter value to search: ";
    cin >> searchKey;

    if (search(root, searchKey))
        cout << "Value found after deletion";
    else
        cout << "Value not found after deletion";

    return 0;
}