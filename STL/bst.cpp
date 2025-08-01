#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(6);

    for(int elem:v){
        cout<<elem<<" ";
    }
    cout<<endl;

    cout<<"Finding 6 :"<<binary_search(v.begin(),v.end(),6)<<endl;


    // cout<<"lower bound :"<<lower_bound(v.begin(),v.end(),6)<<endl;
    // cout<<"lower bound :"<<upper_bound(v.begin(),v.end(),6)<<endl;

    int a=3;
    int b=5;
    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a : "<<a<<endl;
    string str = "abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate : ";
    for(int ele:v){
        cout<<ele<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    for(int eleme:v){
        cout<<eleme<<" ";
    }



}