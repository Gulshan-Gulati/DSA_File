#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,6,5,8,11};
    int target = 14;
    int n = 5;
    bool exist = false;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if((arr[i] + arr[j]) == target){
                exist = true;
            }
        }
    }
    cout<<exist;
}