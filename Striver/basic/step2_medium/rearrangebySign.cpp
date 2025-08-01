#include<bits/stdc++.h>
using namespace std;
void arrangeBySign(int arr[], int n){
    vector<int> positive;
    vector<int> negative;
    for(int i = 0; i<n; i++){
        if(arr[i]>0) positive.push_back(arr[i]);
        else negative.push_back(arr[i]);
    }
    if(positive.size()<negative.size()){
        for(int i = 0; i<positive.size(); i++){
            arr[2*i] = positive[i];
            arr[2*i+1] = negative[i];
        }
        int index = positive.size()*2;
        for(int i = positive.size(); i<negative.size(); i++){
            arr[index] = negative[i];
            index++;
        }
    } else{
        for(int i = 0; i<negative.size(); i++){
            arr[2*i] = positive[i];
            arr[2*i+1] = negative[i];
        }
        int ind = negative.size()*2;
        for(int i = negative.size(); i<positive.size(); i++){
            arr[ind] = positive[i];
            ind++;
        }
    }
}
int main(){
    int arr[] = {1,2,-4,-5,3,4,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrangeBySign(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}