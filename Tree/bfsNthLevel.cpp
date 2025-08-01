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
void ntLevel(node* root,int curr,int level){
    if(root == NULL) return;
    if(curr == level)
    cout<<root -> val;
    ntLevel(root->left,curr+1,level);
    ntLevel(root->right,curr+1,level);
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
    ntLevel(a,1,3);
    return 0;
}