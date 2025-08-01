#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
    cin>>n>>m;
    vector<vector<int> > mat(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++ ){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}