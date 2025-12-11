#include<iostream>
using namespace std;
bool checkPalindrome(int x){
    int rev = 0;
    int temp = x;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev != x){
        return false;
    }
    else return true;
}
int main(){
    int x = 1212;
    if(checkPalindrome(x)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}