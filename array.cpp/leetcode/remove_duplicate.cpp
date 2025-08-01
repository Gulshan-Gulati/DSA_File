#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Enter the element : "<<endl;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
        if(arr[i] = arr[j]){
            for(int i=0; i<n; i++){
                arr[i] = arr[i+1];
            }
            n--;
            j--;
        }
       }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}