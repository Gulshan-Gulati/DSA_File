#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,1,2,4,5,3,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
    for(int i=0; i<n-1; i++){
        int min=INT16_MAX;
        int min_idx=i;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                min_idx=j;
            }       
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}