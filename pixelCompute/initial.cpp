#include<iostream>
using namespace std;
int main(){
    string str = "Sam Smith";
    if(!str.empty()){
        cout<<char(toupper(str[0]));
    }
    for(int i = 0 ; i<str.length() - 1; i++){
       if(str[i] == ' '){
        cout<<char(toupper(str[i+1]));
       } 
    }
    return 0;
}