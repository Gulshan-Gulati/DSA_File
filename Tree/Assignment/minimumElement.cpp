#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int minNode(Node* root){
    if(root = NULL) return INT8_MAX;
    int res = root -> val;
    int lres = minNode(root -> left);
    int rres = minNode(root -> right);
    if(lres < res) res = lres;
    if(rres < res) res = rres;
    return res;
}
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right); 
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(4);
    Node* c = new Node(8);
    Node* d = new Node(2);
    Node* e = new Node(3);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(1);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    displayTree(a);
    cout<<endl;
    cout<<minNode(a)<<endl;
}