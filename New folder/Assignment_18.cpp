#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r=3;
    int c=3;  //if r!=c then this code is not valid...
    vector<int> v;
    int A[r][c];
    for(int i=0; i<r; i++){
        for(int j=0;j<c; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0;j<c; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans;
    for(int i=0; i<r; i++){
        for(int j=0;j<c; j++){
            if(A[i][i]==A[j][j]){
                ans = true;
            }else{
                ans = false;
               
            }
        }
    }cout<<ans;
    return 0;
}