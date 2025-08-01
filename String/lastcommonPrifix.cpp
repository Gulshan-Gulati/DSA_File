#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> str;
    str.push_back("flowler");
    str.push_back("flow");
    str.push_back("flight");

    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    sort(str.begin(),str.end());
    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    int n = str.size();
    string first=str[0];
    string last = str[n-1];
    string ptr="";
    for(int i=0; i<(min(first.size(),last.size())); i++){
        if(first[i]==last[i]){
            ptr += first[i];
        }
    }
    cout<<ptr;

}