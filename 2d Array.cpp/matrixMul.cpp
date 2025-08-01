#include<iostream>
#include<vector>
using namespace std;
int main(){
    // cout<<"Enter the m & n for matrix 1 :";
    // int n,m;
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    int mat2[3][2] = {1,2,3,4,5,6};
    int mat3[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            int sum = 0;
            for(int k=0; k<3; k++){
                sum +=mat1[i][k]*mat2[k][j];
                mat3[i][j] = sum;
            }
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    
}