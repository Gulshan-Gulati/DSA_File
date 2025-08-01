#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cout<<"\n";
    cin>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}