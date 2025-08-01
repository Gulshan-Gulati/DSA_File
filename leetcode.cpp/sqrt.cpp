#include<iostream>
using namespace std;
int sqrt(int n){
    // if(n == 0 || n == 1){
    // return n;
    // }
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = (hi + lo)/2;
        
    if(mid*mid == n){
        return mid;
    }
    else if(mid*mid > n){
        hi = mid - 1;
    }
    else{
        lo = mid + 1;
    }
    }
    return hi;

}
int main(){
    int n;
    cin>>n;
    cout<<sqrt(n);
    return 0;
}