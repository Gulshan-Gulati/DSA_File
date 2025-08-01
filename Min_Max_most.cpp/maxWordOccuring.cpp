#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="Who are you guys? I say who are you";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
int countmax=1;
int count=1;
for(int i=0; i<v.size(); i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    countmax=max(countmax,count);
}
count=1;
for(int i=0; i<v.size(); i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(count==countmax){
        cout<<v[i]<<" "<<countmax<<endl;
    }
}
}