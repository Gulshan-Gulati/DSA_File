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
    st.push(n-1);
   for(int i=n-2; i>=0; i--){
    while(st.size()>0 && arr[i]<arr[st.top()]){
        st.pop();
    }
    if(st.size()==0) 
    nsei[i] = n;
    else nsei[i] = st.top();
    st.push(i);
   }
//    for(int i=0; i<n; i++){
//     cout<<nsei[i]<<" ";
//    }
//    cout<<endl;
   //previous ssmaller element index
   stack<int>stack;
   stack.push(0);
   psei[0] = -1;
   for(int i=0; i<n; i++){
    while(stack.size()>0 && arr[i]<arr[stack.top()]){
        stack.pop();
    }
    if(stack.size()==0) psei[i]=-1;
    else psei[i]=stack.top();
    stack.push(i); 
   }
//    for(int i=1; i<n; i++){
//     cout<<psei[i]<<" ";
//    }
//    cout<<endl;

int maxArea = 0;
for(int i=0; i<n; i++){
    int height = arr[i];
    int breadth = nsei[i]-psei[i]-1;
    int area = height*breadth;
    maxArea=max(maxArea,area);

}
cout<<maxArea<<endl;
} 