#include<iostream>
using namespace std;
bool isPalindrome(int x){
    int temp = x;
    if(x<0) return false;
    int rev = 0;
    while(temp != 0){
        int digit = temp % 10;
        temp = temp/10;
        rev = rev * 10 + digit;
    }
    return (x == rev);
}
int main(){
    int x = 121;
    cout<<bool(isPalindrome(x));
}