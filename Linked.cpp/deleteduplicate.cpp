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

void deleteduplicate(Node* &head){
    Node* curr_node = head;
    while(curr_node != NULL && curr_node -> next !=NULL){
        while(curr_node -> val == curr_node -> next -> val){
            // free(temp->next);
            Node* temp= curr_node -> next;
            curr_node -> next = curr_node -> next -> next;
            free(temp);
        }
                curr_node = curr_node -> next;
    }
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
    deleteduplicate(head);
    display(head);


}