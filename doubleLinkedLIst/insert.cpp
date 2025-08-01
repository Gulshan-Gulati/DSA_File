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
class doubleLL{
    public:
    Node* head;
    Node* tail;
    int size;
    doubleLL(){
        head = tail = NULL;
         size = 0; 
    }
    void insertAtTail(int val){
        Node* new_Node = new Node(val);
        if(size == 0)
        head = tail = new_Node;
        else{
            tail->next = new_Node;
            new_Node -> prev = tail;
            tail = new_Node;
        }
        size++;
    }
    
    void insertAtHead(int val){
        Node* new_node = new Node(val);
        if(size == 0){
            head = tail = new_node;
        }else
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
    }
    void insertAtIdx(int val,int pos){
        Node* new_node = new Node(val);
        int currposition = 0;
        Node* temp = head;
        if(pos == 0){
            insertAtHead(val);
        }
        else{
            while(currposition != pos - 1){
                temp = temp -> next;
                currposition++;
            }
            new_node -> next = temp -> next;
            temp -> next = new_node;
            new_node -> prev = temp;   
            temp = new_node;
            
        }

    }
     
   void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
    cout<<endl;
   }
};
int main(){
    doubleLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    list.insertAtTail(60);
    list.display();
    list.insertAtHead(2);
    list.display();
    list.insertAtIdx(7,2);
    list.display();


    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(40);
    // Node* e = new Node(50);

    // a->next= b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    
    // e->prev=d;
    // d->prev=c;
    // c->prev=b;
    // b->prev=a;
}