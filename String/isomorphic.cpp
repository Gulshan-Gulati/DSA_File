#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s = "foo";
    string t = "brr";
    vector<int> v(150,1000);
    if(s.size() != t.size())
    return false;

    for(int i=0; i<s.size(); i++){
        int idx = (int)(s[i]);
        if(v[idx]==1000){
            v[idx] = s[i] - t[i];
        } else if(v[idx]!=s[i] - t[i])
        return false;
    }
    for(int i=0; i<150; i++){
        v[i]=1000;
    
         for(int i=0; i<t.size(); i++){
        int idx = (int)(t[i]);
        if(v[idx]==1000){
            v[idx] = t[i] - s[i];
        } else if(v[idx]!=t[i] - s[i])
        return false;
    }
    return true;
}
}