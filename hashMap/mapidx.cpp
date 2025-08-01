#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> price;
    price["Apple"] = 140;
    price["Banana"] = 70;
    price["Papaya"] = 50;
    price["Dove"] = 60; 
    price["Apple"] = 150;
    price.insert({"Banana",20}); // iss formate me update nhi hota hai..!!
    // price["Banana"]=10;  //isme update ho jata hai..!!

    for(auto ele:price){
         cout<<"Frout Name : "<<ele.first<<endl;
         cout<<"Price :"<<ele.second<<endl;
    }
    cout<<endl;
    // map<string,int>::iterator itr;
    // for(itr=price.begin(); itr!=price.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    map<string,int>::reverse_iterator itr;
    for(itr=price.rbegin(); itr!=price.rend();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

}