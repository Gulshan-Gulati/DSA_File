#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayrecursion(Node* head){
    Node* temp = head;
    if(head == NULL){
        return;
    }
    cout<<temp->val<<" ";
    displayrecursion(head->next);
}
void displayRecurRev(Node* head){
    Node* temp = head;
    cout<<endl;
    if(head == NULL){
        return;
    }
    displayrecursion(head->next);
    cout<<temp->val<<" ";
}
void displayRev(Node* tail){
    cout<<endl;
    while(tail != NULL){
        tail = tail -> prev;  //error
    }
    return;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    display(a);
    displayrecursion(a);
    displayRecurRev(a);
    displayRev(e);

}