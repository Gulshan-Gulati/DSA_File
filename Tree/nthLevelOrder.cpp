#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};
int levels(node* root){
    if(root == NULL) return 0;
    return 1 + levels(root->left) + levels(root->right);
}
void ntLevel(node* root,int curr,int level){
    if(root == NULL) return;
    if(curr == level){
    cout<<root -> val<<" ";
    return;
    }
    ntLevel(root->left,curr+1,level);
    ntLevel(root->right,curr+1,level);
}
int levelOrder(node* root){
    int n = levels(root);
    for(int i=0; i<n; i++){
    ntLevel(root,1,i);
    cout<<endl;
    }
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    levelOrder(a);
    return 0;
}