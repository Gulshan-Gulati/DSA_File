#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,3,14,45,54,89,98};
    int n = 8;
    int x = 54;
    for(int i =0; i<n; i++){
        if(arr[i]>=x){
            cout<<arr[i-1]<<endl;
            break;
        }

    }
}