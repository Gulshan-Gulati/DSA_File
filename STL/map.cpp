#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="hello";
    m[12]="Pagal";
    m[3]="hacker"; 
    m[20]="Kaise ho";

    for(auto ele:m){
        cout<<ele.first<<" ";
        cout<<ele.second<<endl;
    }
    cout<<"is 12 present : "<<m.count(12)<<endl;

    m.erase(12);
    for(auto ele:m){
        cout<<ele.first<<" ";
        cout<<ele.second<<endl;
    }  
}