#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse;
    while(n>0){
        reverse=n%10;
            cout<<reverse;
        n=n/10;
    }
    return 0;
}