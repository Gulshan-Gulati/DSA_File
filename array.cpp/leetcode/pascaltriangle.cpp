#include<iostream>
#include<vector>
using namespace std;
// vector<vector<int>> pascal;
int main(){
    cout<<"Enter the value of n :"<<endl;
    int n;
    cin>>n;
    vector<vector<int>> pascal(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==i){
                pascal[i][j] = 1;
            }else{
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<pascal[i][j];
        }
        cout<<endl;
    }
    return 0;
}