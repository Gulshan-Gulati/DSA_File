#include<iostream>  //wrong
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    vector<int> input(n);

    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    for(int i=0; i<n; i++){
        cout<<input[i];

    }
    map<int,int>m;
    for(int i=0; i<n; i++){
        m[input[i]]++;
    }
    int sum=0;
    for(auto ele:m){
        if(ele.second>1){
            sum+=ele.first;
        }
    }
    cout<<sum;
}