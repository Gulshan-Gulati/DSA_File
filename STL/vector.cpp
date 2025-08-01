#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity :"<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"Capacity :"<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    cout<<"Element at 2nd index :"<<v.at(2)<<endl;
    cout<<"1st Element :"<<v.front()<<endl;
    cout<<"Last Element :"<<v.back()<<endl;
    v.pop_back();
    cout<<"Size :"<<v.size()<<endl;

    v.clear();
    cout<<"Size after clear : "<<v.size()<<endl;

    vector<int> a(5,1);  // 5 value and all value initially 1
    for(int ele:a){
        cout<<ele<<" ";
    }
    
}