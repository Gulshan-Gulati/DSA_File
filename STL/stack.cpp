#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> st;
    st.push("Gulshan");
    st.push("G");
    st.push("Series");
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty(); 
}