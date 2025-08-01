#include<stack>
#include<iostream>
using namespace std; 
void print(stack<int> &st){
    stack<int> display;
    while(st.size()>0){
        display.push(st.top());
        st.pop();
    }
    while(display.size()>0){
        cout<<display.top()<<" ";
        st.push(display.top());
        display.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtBottom(st,80);
    print(st);
    }   