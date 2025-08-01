#include<iostream>
using namespace std;
int smax(int arr[],int n){
    int max=0;
    int secondmax=0;
    for(int i=0; i<8; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<8; i++){
        if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
        return secondmax;
    }
int main(){
    int arr[]={2,5,3,70,15,8,9,18};
    int n=8;
    cout<<smax(arr,n)<<endl;
    return 0;
}