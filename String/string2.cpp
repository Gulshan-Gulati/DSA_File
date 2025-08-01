#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Gulshan Kumar";
    cout<<str;
    cout<<endl;

    //string input
    string s;
    // cin>>s;    //only if the given string has no psaces
    getline(cin,s);    //working both in space or without space
    
    cout<<s;
}