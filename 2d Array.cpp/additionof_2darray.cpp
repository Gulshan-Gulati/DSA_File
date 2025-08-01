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
    cout<<"\n";

    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum +=a[i][j];
        }
    }
    cout<<sum;

    cout<<"\n";
    int mul=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mul *=a[i][j];
        }
    }
    cout<<mul;
    return 0;
}