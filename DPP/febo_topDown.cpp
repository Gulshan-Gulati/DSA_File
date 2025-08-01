#include<iostream>
#include<vector>
using namespace std;

int fibo(int n, vector<int> &dp){

        // base case 
        if(n<=1)
        return n;
        
        // step 3
        if(dp[n] != -1)
        return dp[n];

        // step 2
        dp[n] = fibo( n-1, dp )+fibo( n-2, dp );
        return dp[n];
}


int main(){
        int n;
        cin>>n;

        // step 1
        vector<int> dp( n + 1, -1);
        cout<<fibo(n,dp)<<endl;
        return 0;
}