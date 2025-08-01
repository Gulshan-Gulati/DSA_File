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
void reverseprint(Node* &head){
    if(head==NULL){
        return;
    }
    reverseprint(head->next);    //recursive calling
        cout<<head->val<<" ";
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
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,1);
    display(head);
    reverseprint(head);


}