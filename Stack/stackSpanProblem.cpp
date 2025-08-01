#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ssp[n];
    stack<int>st;
    st.push(0);
    ssp[0] = -1;
    for(int i = 1; i<n; i++){
            while(st.size()>0 && arr[st.top()] <= arr[i]){
                st.pop();
            }if(st.size() == 0) ssp[0] = -1;
            else ssp[i] = st.top();
            st.push(i);
    }
    for(int i=0; i<n; i++){
        ssp[i] = i-ssp[i];
    }
    for(int i=0; i<n; i++){
        cout<<ssp[i]<<" ";
    }
    cout<<endl;
}
