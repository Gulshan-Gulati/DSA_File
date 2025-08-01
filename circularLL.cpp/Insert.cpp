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

    void deleteAtTail(){
        if(size == 0){
            cout<<"List is empty";
            return;
        }else{
        Node* temp = tail->prev;
        temp -> next = NULL;
        temp = tail;
        size--;
        }
    }
    void deleteAtHead(){
        Node* temp = head;
        if(size == 0){
            cout<<"List is empty";
            return;
        } else{         
            head = temp -> next;
            head -> prev = temp;   
        }
    }
    void deleteAtidx(int idx){
        if(size == 0){
            cout<<"List is empty";
            return;
        }else if(idx < 0 || idx >= size){
            cout<<"Invalid index";
            return;
        } else if(idx == 0){
            return deleteAtHead();
        } else if(idx == size - 1){
            return deleteAtTail();
        } else{
            Node* temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp -> next;
            }
            temp -> next = temp -> next -> next;
            size--;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx >= size){
            cout<<"Invalid index";
            return -1;
        } else if(idx==0){
            return head -> val;
    } else if(idx == size -1)
    return tail->val;
    else{
        Node* temp = head;
        for(int i = 1; i<= idx; i++){
            temp = temp-> next;
        }
        return temp->val;
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
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtidx(2);
    list.display();
    cout<<list.getAtIdx(1);
    


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