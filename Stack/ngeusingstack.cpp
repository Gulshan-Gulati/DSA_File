#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3,2,2,10,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    int nge[n];
    st.push(arr[n-1]);
    nge[n-1] = -1;
    for(int i=n-2; i>=0; i--){
        while(st.size()>0 && arr[i]>st.top()){
        st.pop();
        }
        //mark the answer in next greater array
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<nge[i]<<" ";
    }
}