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

    stack<int>temp;
    if(st.size() == 0){
        cout<<"Empty Stack";
    }else{
        while(st.size()>0){
            cout<<st.top()<<" ";
            // int x;
            // x = st.top();
            // st.pop();
            // temp.push(x);
            temp.push(st.top());
            st.pop();
        }
        cout<<endl;
        while(temp.size()>0){
            cout<<temp.top()<<" ";
            // int x;
            // x = temp.top();
            // temp.pop();
            // st.push(x);
            st.push(temp.top());
            temp.pop();
        }
        cout<<endl;
        cout<<st.top();
    }
    }