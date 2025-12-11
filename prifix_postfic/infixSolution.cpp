#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' ||  ch == '/') return 2;
    else return 0;

}
int solve(int val1, int val2, char ch){
    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "-/*+79483";
    stack<int>val;
    for(int i =s.length()-1; i>=0; i--){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }else{
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }    
        cout<<val.top()<<endl;
}