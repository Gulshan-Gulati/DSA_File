#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(9);
    s.insert(7);
    s.insert(-8);
    s.insert(2);
    s.insert(-8);
    s.insert(-2);
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"2 is present or not : "<<s.count(2)<<endl;

    set<int> :: iterator it = s.begin();
    it++;
    set<int>::iterator itr = s.find(-2);
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }
}