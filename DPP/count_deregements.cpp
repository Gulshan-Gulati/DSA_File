#include<iostream>
#include<vector>
using namespace std;
int countDeregement(int n){
     if(n==1) return 0;
    int ans = (n-1)*(countDeregement(n-2)+countDeregement(n-1));
    return ans;
    if(n==2) return 1;
}
int main(){
    int arr[] = {0,1,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int countDeregement(n);
    cout<<countDeregement<<endl;
}