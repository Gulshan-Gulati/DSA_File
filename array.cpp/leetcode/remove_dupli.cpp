#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){
            arr[index] = arr[i];
        }
        index++;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}