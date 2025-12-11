#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

// InOrder traversal (right, root, left)
void inOrder(Node* root, vector<int> &arr) {
    if (root == nullptr) return;
    inOrder(root->right, arr);
    arr.push_back(root->val);
    inOrder(root->left, arr);
}

// PreOrder traversal (root, left, right)
void preOrder(Node* root, vector<int> &arr, int &i) {
    if (root == nullptr) return;
    arr[i++] = root->val;
    preOrder(root->left, arr, i);
    preOrder(root->right, arr, i);
}

// Level order traversal using queue
void levelOrderQueue(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != nullptr) {
            q.push(temp->left);
        }
        if (temp->right != nullptr) {
            q.push(temp->right);
        }
    }
    cout << endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);

    a->left = b;  a->right = c;
    b->left = d;  b->right = e;
    c->left = f;  c->right = g;

    vector<int> arr;
    inOrder(a, arr);
    levelOrderQueue(a);
    int i = 0;
    preOrder(a, arr, i);
    for (int j = 0; j < i; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
