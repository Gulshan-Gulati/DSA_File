#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> &st){
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

void pushAtIdx(stack<int> &st,int pos,int val){
    stack<int>position;
    while(st.size()>pos){
        position.push(st.top());
        st.pop();
    }
    st.push(val);
    while(position.size()>0){
        st.push(position.top());
        position.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    stack<int> gt;
    pushAtIdx(st,2,78);
    print(st);
}