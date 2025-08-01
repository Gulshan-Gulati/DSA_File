#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};
int main(){
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    node temp = a;
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next == NULL)
    //     break;
    //     temp = *(temp.next);
    // }
}