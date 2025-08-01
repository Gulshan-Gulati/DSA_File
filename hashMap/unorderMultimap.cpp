#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>fruit;
    fruit.insert(make_pair("apple",10));
    fruit.insert(make_pair("Mango",8));
    fruit.insert(make_pair("Carrot",20));
     fruit.insert(make_pair("apple",10));

    for(auto ele:fruit){
        cout<<"Fruit : "<<ele.first<<endl;
        cout<<"Fruit : "<<ele.second<<endl;
    }
    return 0;
}