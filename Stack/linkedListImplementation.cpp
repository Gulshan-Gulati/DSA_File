#include<iostream>
// #include<stack>
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
class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;

    }
    void push(int val){
        Node* new_node = new Node(val);
        new_node -> next = head;
        head = new_node;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return;
        } 
        head = head -> next;
        size--;
    }
    int top(){
        if(head == 0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head -> val;
    }
    void print(Node* temp){
        if(temp == NULL) return;
        print(temp->next);
        cout<<temp -> val<<" ";
    }
    void display(){
        Node* temp= head;
        // while(temp!=NULL){
        //     cout<<temp->val<<" ";  //reverse print karega
        //     temp = temp -> next;
        // }
        // cout<<endl;

        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.size<<endl;
    st.display();  //Top to bottom printed

}