#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //Creation
    map<string,int>m;
    pair<string,int> p = make_pair("Hello",2);  
        //Insertation
    m.insert(p);                                          //method-1
    pair<string,int> q("Love",4);
    m.insert(q);                                          //method-2
    m["mera"] = 1;

    cout<<m["mera"]<<endl;
    cout<<m.at("Hello")<<endl;
    
    // cout<<m.at("unknown")<<endl; //it will give error because it can't make any entity directly
    cout<<m["Unknown"]<<endl;    //maked an entity
    // cout<<m.at("unknown")<<endl;  //then it will be printed
       
    //size
    cout<<m.size()<<endl;

    //No. of presence
    cout<<m.count("Love")<<endl;

    //Erase
    m.erase("Love");
    cout<<m.size()<<endl;
    map<string,int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}