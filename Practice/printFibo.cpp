#include<iostream>
using namespace std;
int printFibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return printFibo(n-1) + printFibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // printFibo(n);
    for(int i = 0; i<n; i++){
        cout<<printFibo(i)<<" ";
    }
    return 0;
}