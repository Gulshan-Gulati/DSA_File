#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool checkAnagram(string s1, string s2){
    unordered_map<char,int> anagram;
    if(s1.length()!=s2.length()){
        return false;
    }
    for(auto c:s1){
        anagram[c]++;
    }
    for(auto p:s2){
        if(anagram.find(p)==anagram.end()){
            return false;
        }
        else{
            anagram[p]--;
        }
    }
    for(auto ele:anagram){
        if(ele.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<(checkAnagram(s1,s2)?"Anagram":"Not Anagram")<<endl;
}
