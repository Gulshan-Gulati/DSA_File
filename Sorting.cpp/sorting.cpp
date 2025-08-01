#include<iostream>
using namespace std;
int main(){
    int sorting=false;
    int arr[]={1,2,3,4,5,6,7,8};
    for(int i=0; i<8; i++){
        if(arr[i]>arr[i-1]){
            sorting=true;
        }else{
            sorting=false;
        }
    }
    cout<<sorting;
    return 0;
}