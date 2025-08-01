#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 20;
    vector<int>divisor;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            divisor.push_back(i);
        }
    }
    
    for (int d : divisor) {
        cout << d << " ";
    }
    return 0;
}