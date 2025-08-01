#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
   string str="helloworld";
   vector<int> s(26,0);
   int max=0;
   for(int i=0; i<str.length(); i++){
    int ch=s[i];
    int ascii=(int)ch;
    str[ascii-97]++;
   }
   for(int i=0; i<str.length(); i++){
    if(str[i]>max){
        max=str[i];
    }
   }
   for(int i=0; i<str.length(); i++){
    if(str[i]==max){
        max=str[i];
    }
   }
   cout<<max;
}