#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    for(int i=0; i<5; i++){
            int element;
    cin>>element;
    arr.push_back(element);
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.erase(arr.end()-2);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    arr.insert(arr.begin()+1,8);
    for(int val : arr){

        cout<<val<<" ";
    }



    return 0;
}