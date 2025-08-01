#include<stack>
#include<iostream>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);  
    stack<int>gt;
    stack<int>rt;

        while(st.size()>0){
            // cout<<st.top()<<" ";
            gt.push(st.top());
            st.pop();
        }
        // cout<<endl;
        while(gt.size()>0){
            rt.push(gt.top());
            gt.pop();
        }
        // cout<<endl; 

        while(rt.size()>0){
            st.push(rt.top());
            rt.pop();
        }
        print(st);
    }