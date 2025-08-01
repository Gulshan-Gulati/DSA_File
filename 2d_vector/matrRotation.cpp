#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > v;
    cout<<"Enter the value of m :"<<endl;
    int m,n; 
    cin>>m;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(int i = 0; i<m; i++){
       for(int j=0; j<n; j++){
        cin>>v[i][j];
       }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}