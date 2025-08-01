#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
   int sum_odd=0;
   int sum_even=0;
for(i=1; i<=n; i++){
    if(i%2==0){
    sum_even+=i;
    }else{
        sum_odd+=i;
    }
    }
     cout<<(sum_odd - sum_even);
    return 0;
}