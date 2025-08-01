#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-1,1,1};
    int n = 3;
    int k = 1;
    int len = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){

            sum +=arr[j];

            if(sum == k)
                len = max(len,j-i+1);
        }
    }
    cout<<len;
    return 0;
}