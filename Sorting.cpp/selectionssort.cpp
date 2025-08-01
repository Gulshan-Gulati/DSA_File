#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {2,1,4,3,5,7};
    int n = arr.size();

    for(int i = 0; i<n-1; i++){
        int min  = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
