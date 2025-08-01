#include<stack>
#include<iostream>
using namespace std; 
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    if(st.size() == 0){
        cout<<"Empty stack";
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    }