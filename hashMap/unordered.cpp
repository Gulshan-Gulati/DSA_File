#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>name;
    name[3]="deepak";
    name.insert(make_pair(8,"shubham"));
    name.insert(make_pair(7,"shubham"));
    name[1]="Gullu";
    name.insert(make_pair(1,"say"));  //it cannot update any value
    name[1]="Gulati"; //it can update the value

    for(auto ele:name){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}