#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        this -> val = data;
        this -> next = NULL;
    }
};
int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout<<(*((*((*(a.next)).next)).next)).val<<" ";
    cout<<(((a.next)->next)->next)->val<<" ";

    // Node temp = a;
    //     while(1){
    //     cout<<temp.val<<" "; 
    //     if(temp.next == NULL)
    //     break;
    //     temp = *(temp.next);
    // }

}
