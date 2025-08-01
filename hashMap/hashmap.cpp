#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> arr;
    arr["apple"]=1;
    arr["Banana"]=1;
    arr["mango"]=1;
    arr["hello"]=5;
    arr["hello"]=6;
    for(auto ele : arr){
        cout<<ele.first<<" ";
        cout<<ele.second<<endl;
    }
}