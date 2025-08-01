#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}