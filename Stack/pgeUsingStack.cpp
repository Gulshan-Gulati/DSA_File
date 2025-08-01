#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    int pge[n];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    st.push(arr[0]);
    pge[0]=-1;
    for(int i=1; i<n; i++){ 
    while(st.size()>0 && arr[i]>st.top()){
        st.pop();
    }
    if(st.size()==0) pge[i] = -1;
    else
        pge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;

}