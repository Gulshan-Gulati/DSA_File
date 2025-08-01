#include<iostream>
// #include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,5,6,7,8};
    int sum_even=0;
    int sum_odd=0;
    for(int i=0; i<7; i++){
        if(i%2==0){
            sum_even+=arr[i];
        }else{
            sum_odd+=arr[i];
        }
    }
    cout<<(sum_even-sum_odd)<<endl;
    return 0;
}