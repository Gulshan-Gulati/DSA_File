#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
        int val;
       Node* left;
       Node* right;
        Node(int val){
        this -> val = val;
        left = nullptr;
        right = nullptr;
       }
};
     void inOrder(Node* root, vector<int>&arr){
        if(root == NULL) return;
        inOrder(root -> right, arr);
        arr.push_back(root->val);
        inOrder(root -> left, arr);
     }
     void preOrder(Node* root, vector<int>&arr, int &i){
        if(root == NULL) return;
        arr[i++] = root -> val;
        preOrder(root -> left, arr,i);
        preOrder(root -> right, arr, i);
     }
     void levelOrderQueue(Node* root){
        queue<Node*> q;
        q.push(root);
        while(q.size()>0){
            Node* temp = q.front();
            q.pop();
            cout<<temp -> val<<" ";
            if(temp -> left != NULL){
                q.push(temp -> left);
            }
            if(temp -> right != NULL){
                q.push(temp -> right);
            }
            

        }
        cout<<endl;

     }
    int main(){
    Node* a = new Node(10);
    Node* b = new Node(15);
    Node* c = new Node(16);
    Node* d = new Node(8);
    Node* e = new Node(12);
    Node* f = new Node(20);
    Node* g = new Node(1);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelOrderQueue(a);

    vector<int> arr;

    inOrder(a, arr);
    int i = 0;
    
    preOrder(a,arr,i);
    levelOrderQueue(a);
    return 0;

}