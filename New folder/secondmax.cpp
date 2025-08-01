#include<iostream>
using namespace std;
int msin(){
    int arr[]={2,5,3,7,5,8,9,18};
    int max=0;
    int smax=0;
    for(int i=0; i<8; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<8; i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
    return 0;
}