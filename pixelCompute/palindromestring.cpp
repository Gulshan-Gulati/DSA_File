#include<iostream>
using namespace std;
bool isPalindrome(int i, string &str){
    int n = str.length();
    if(i>=n/2) return true;
    if (str[i] != str[n-i-1]) return false;
    return isPalindrome(i+1, str); 
}
int main(){
    string str = "madamji";
    cout<<isPalindrome(0, str);
    return 0;
}