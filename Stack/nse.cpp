#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int area,height,breadth;
    int nsei[n];
    int psei[n];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;

    stack<int>st;
    nsei[n-1] = n;
    st.push(arr[n-1]);
   for(int i=n-2; i>=0; i--){
    while(st.size()>0 && arr[i]<arr[st.top()]){
        st.pop();
    }
    if(st.size()==0) 
    nsei[i] = n;
    else nsei[i] = st.top();
    st.push(arr[i]);
   }
   for(int i=0; i<n; i++){
    cout<<nsei[i]<<" ";
   }
   cout<<endl;

   for(int i=0; i<n; i++){
    st.pop();
   }
   
}