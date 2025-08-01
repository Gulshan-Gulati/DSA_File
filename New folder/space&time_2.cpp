#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            a[i]=i;
            b[j]=j;
        }
    }
    return 0;
}