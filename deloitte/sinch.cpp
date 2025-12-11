#include<iostream>
using namespace std;
int main(){
    int arr[] = { 1,2,3,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // bool flag = true;
    int i = 0;
    while(i<n/2){
        if(arr[i] != arr[n-i-1]){
            cout<<"Not Palindrome";
            return 0;
        }
        i++;
    }
    cout<<"Palindrome";
}