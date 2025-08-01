#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
    val = data;
    next = NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void reverselinkedlist(Node* &head){
    Node* prevpoint = NULL;
    Node* currpoint = head;
    while(currpoint !=NULL){
        Node* nextptr = currpoint ->next;
        currpoint -> next = prevpoint;
        prevpoint = currpoint;
        currpoint = nextptr;
    }
    head = prevpoint;
}

//recursive method..!!
//1->2->3->-4->5
Node* reverserecursive(Node* &head){

    if(head==NULL || head -> next == NULL){ //base case
        return;
    }
    // Node* new_head = head->next;
 
    Node* new_head = reverserecursive(head->next);
    head->next->next=head;
    head -> next =NULL;  //head is now pointing to last node in reversed linked list
    new_head = head;
    return new_head;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    reverselinkedlist(head);
    display(head);
    reverserecursive(head);
    display(head);
}