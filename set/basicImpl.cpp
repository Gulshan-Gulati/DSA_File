#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    
    int target = 4;
    if(s.find(target) != s.end()){
        cout<<"Exist"<<endl;
    }else{
        cout<<"Not Exist"<<endl;
    }
    // for printing use for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
    
}
