#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Enter the element :"<<endl;
    vector<int> arr;
    int target = 2;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
    }
    int index = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != target){
            arr[index] =arr[i];
            index++;
        }
    }
}