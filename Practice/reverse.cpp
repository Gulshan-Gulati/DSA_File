#include<iostream>
using namespace std;
int rev(int x){
    int rev = 0;
    while(x != 0){
        int digit = x%10;
        x = x/10;
        rev = rev * 10 + digit;
    }
    return rev;
}
int main(){
    int n = 123;
    cout<<rev(n);
    return 0;
}