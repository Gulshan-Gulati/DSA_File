#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;

    Node(int data){
        this->value = data;
       this->next = NULL;
    }

};
void display(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->value<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

    //delete target node..!!
    void deletenode(Node* head, Node* target){
        if(head == target){
            head = head -> next;
            return;
        }
        Node* temp = head;
        while(temp->next != target){
            temp = temp-> next;
        }
        temp->next = temp->next->next;
    }

    //delete target value..
    void deletetar(Node* head, int targetval){
        if(head ->value == targetval){
            head = head -> next;
            return;
        }
        Node* temp = head;
        while(temp -> next -> value != targetval){
            temp = temp-> next;
        }
        temp->next = temp->next->next;
    }
int main(){ 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    display(a);
    deletenode(a,d);
    display(a);

    deletetar(a,20);
    display(a);
}