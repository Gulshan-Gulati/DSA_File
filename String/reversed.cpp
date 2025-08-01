#include<iostream>
#include<string>
#include<algorithm>
// #include<vector>
using namespace std;
int main(){
    // string str="abcde";
    // reverse(str.begin(),str.end());
    // cout<<str;

    string str="Abcdefg";
    reverse(str.begin()+2,str.end()-1);
    cout<<str;
    cout<<endl;

    string s="wertyu";
    // reverse(s.begin()+2,s.begin()+5);  if reversed between i=2 to i=4, then we take 
    cout<<s;

}