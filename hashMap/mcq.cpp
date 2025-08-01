#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m.insert({1,10});
    m.insert({1,20});
    m.insert({3,30});
    m[4]=40;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}