#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> directory;
    directory.insert(make_pair("say",892323));
    directory.insert(make_pair("Gulati",29483));
    directory.insert(make_pair("Gulati", 74393984));

    for(auto ele:directory){
        cout<<"Name : "<<ele.first<<endl;
        cout<<"Mob. No. : "<<ele.second<<endl;
    }
    cout<<directory.count("Gulati")<<endl;
}