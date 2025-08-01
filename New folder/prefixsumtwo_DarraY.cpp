#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > spiral(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>spiral[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<spiral[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum=0;
    for(int i=1; i<=2; i++){
        for(int j=1; j<=2; j++){
           sum+=spiral[i][j];
        }
    }
    cout<<sum;
    
}