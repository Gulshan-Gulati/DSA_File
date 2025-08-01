#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[8]={ 1,2,3,4,5,6,7,8};
    int ansSum = 0;
    for(int i=0; i<8; i++){
        if(arr[i]%2==0){
           ansSum+=arr[i];
        }else{
            ansSum-=arr[i];
        }
    }
    cout<<ansSum;
    return 0;
}