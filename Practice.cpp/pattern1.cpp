#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n,m;
    cout<<"Enyter the value of n and m respectively : ";
    cin>>n;
    cin>>m;
    for(i=0; i<n; i++){
        for(j = i; j<m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}