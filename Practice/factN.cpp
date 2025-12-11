#include<iostream>
using namespace std;
int printNfact(int n){
    int fact = 1;
    for(int i = n; i>0; i--){
        fact *= i;
    }
    cout<<fact;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    printNfact(n);
    return 0;
}