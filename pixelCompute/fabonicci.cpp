#include<iostream>
using namespace std;
int fabonacci(int n){
    if(n<=1) return n;
    return fabonacci(n-1) + fabonacci(n-2);
}
int main(){
    int  n = 10;
    for(int i = 0 ; i<n; i++)
    cout<<fabonacci(i)<<" ";
    return 0;
}