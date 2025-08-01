#include<iostream>
#include<vector>
using namespace std;
void spiralmatrix(vector<vector<int> > &spiral){
    int left=0;
    int right=spiral[0].size()-1;
    int top=0;
    int bottom=spiral.size()-1;
    int download=0;
    // int spiral;
    while(left<=right && top<=bottom){
        if(download==0){
            for(int col=left; col<=right; col++){
                cout<<spiral[top][col]<<" ";
            }
            top++;
        }
        else if(download==1){
            for(int row=top; row<=bottom; row++){
                cout<<spiral[row][right]<<" ";
                
            }
            right--;
        }
        else if(download==2){
            for(int col=right; col>=left; col--){
                cout<<spiral[bottom][col]<<" ";
               
    }
     bottom--;
}
else{
            for(int row=bottom; row>=top; row--){
                cout<<spiral[row][left]<<" ";
                
            }
            left++;
}
download=(download+1)%4;
    }

    }
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
    spiralmatrix(spiral);
    return 0;
}