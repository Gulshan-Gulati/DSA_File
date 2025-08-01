#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string str="Gulshan is a student. and Gulshan wants to make each to best";
  stringstream ss(str);
  string temp;
  vector<string> v;

  while(ss>>temp){
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
  }
  int maxword=0;
  int count=1;

  for(int i=0; i<v.size(); i++){
    char ch=str[i];
    for(int j=i+1; j<str.length(); j++){
        if(str[j]==str[i])

            count++;
    }if(maxword<count) 
    maxword=count;;
  }
   }
    for(int i=0; i<v.size(); i++){
      char ch=str[i];
      for(int j=i+1; j<str.length(); j++){
        if(str[j]==str[i])

            count++;
    }if(maxword<count) 
    maxword=count;;

 
  }
