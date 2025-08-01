#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    vector<int> v; 
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size() == 0){
            cout<<"Stack is empty"<<endl;   
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;   
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(80);
    st.push(50);
    st.push(70);
    st.push(20);
    st.push(10);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

}