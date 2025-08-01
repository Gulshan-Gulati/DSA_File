#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pge[n];
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i>=0; i--){
        pge[i]=-1;
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[i]){
                pge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}