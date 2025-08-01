#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="18648678";
    int x=stoi(str);//for small data;
    cout<<x+1<<endl;
    // for long data;
    string hello="2356567678787998908";
    long long y=stoll(hello);
    cout<<y;
}