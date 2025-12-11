#include<iostream>
using namespace std;
int printnNumber(int n){
    if(n == 0) return 0;
    printnNumber(n-1);
    cout<<n<<" ";
}
int main(){
    cout<<"Enter number : ";
    int n;
    cin>>n;
    printnNumber(n);
    return 0;
}