#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="I am a student";
    stringstream ss(str);
    cout<<str;
    string temp;
    while(ss>>temp){
        cout<<temp;
    }
}