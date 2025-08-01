#include<iostream>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int val;

    Node(int val){
        this -> val = val;
        this -> left =  NULL;
        this -> right = NULL;
    }
};
int minInTree(Node* root){
    if(root == NULL) return INT8_MAX;
    return min(root->val,min(minInTree(root->left),minInTree(root->right)));
}
int mul(Node* root){
    if(root == NULL) return 1;
    int ans = (root -> val) * mul(root -> left) * mul(root -> right);
    return ans;
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    cout<<minInTree(a)<<endl;
    cout<<mul(a);
    cout<<endl;
    cout<<levels(a);

}