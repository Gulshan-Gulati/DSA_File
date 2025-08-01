#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[] = {2,1,3};
    array<int,4> arr = {2,1,3,5};

    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index : "<<arr.at(2)<<endl;
    cout<<"Empty or not : "<<arr.empty()<<endl;
    cout<<"First Element : "<<arr.front()<<endl;
    cout<<"Last element : "<<arr.back()<<endl;
}