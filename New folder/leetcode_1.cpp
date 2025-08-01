#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="aa";
    string t="aa";
    int option=-1;
    if(s!=t){
        option=false;
    }else{
       option=true;
    }
    cout<<option;
    return 0;
} 