#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n][m];      //n rows & m Column  
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }     
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }cout<<endl;
    return 0;
}