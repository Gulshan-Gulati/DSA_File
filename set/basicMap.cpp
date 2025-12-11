#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    pair<string, int>p1;
    p1.first = "Raghav";
    p1.second = 76;
    m.insert(p1);

    m["Lokesh"] =12;
    m["Harsh"] = 14;
    // for(pair<string, int>p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("lokesh");
    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m["Raghav"];

}