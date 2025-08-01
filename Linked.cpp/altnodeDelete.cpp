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

    class linkedlist{
        public:
        Node* head;
        linkedlist(){
            head = NULL;
    }
    void insertAtEnd(int val){
        Node* new_Node = new Node(val);
        if(head == NULL){
            head = new_Node;
            return;
        }   
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_Node;
    }

    void alternetDelete(Node* &head){
        Node* current = head;
        Node* temp = current -> next;
        while(current -> next !=NULL && current != NULL){
            temp = current -> next;
            current -> next = current -> next -> next;
            free(temp);
            current = current -> next;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    linkedlist LL;
    LL.insertAtEnd(1);
    LL.insertAtEnd(2); 
    LL.insertAtEnd(3);
    LL.insertAtEnd(4);
    LL.insertAtEnd(5);
    LL.insertAtEnd(6);
    LL.display();

    LL.alternetDelete(LL.head);
    LL.display();
}
