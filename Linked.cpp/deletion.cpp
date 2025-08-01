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
void insertAtTail(Node* head,int val){
    Node* temp = head;
    Node* new_Node = new Node(val);
    while(temp->next !=NULL){
    temp = temp -> next;
    }
    temp -> next = new_Node;
}
void insertAtanyPosition(Node* head,int position, int val){
    Node* new_Node = new Node(val);
    if(position == 0){
        insertAtHead(head,val);
        return;
    }
    Node* temp = head;
    int current_position = 0;
    while(current_position != position-1){
        temp = temp->next;
        current_position++;
    }
   new_Node -> next = temp->next;
   temp -> next = new_Node;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(Node* &head){
    Node* temp = head;
    // Node* t2 = t1 -> next;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    Node* temp2 = temp -> next;
    free(temp2);  
    temp -> next = NULL;
}
void deleteAtAnyPosition(Node* &head, int pos){
    if(pos == 0){
        deleteAtHead(head);
        return;
    }
    Node *prev = head;
    int current_pos = 0;
    while(current_pos != pos-1){
         prev = prev -> next;
         current_pos++;
    }
    Node* temp = prev -> next;
    prev -> next = temp -> next;
    free(temp);

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
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);  
    insertAtTail(head,3);
    display(head);
    insertAtanyPosition(head,2,4);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtEnd(head);
    display(head);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    deleteAtAnyPosition(head,2);
    display(head);






}