#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascaltriangle(int n){  //call recieve
    vector<vector<int>> pascal(n);  //for storage
    for(int i=0; i<n; i++){
    pascal[i].resize(i+1);
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                pascal[i][j] = 1;
             }
              else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}
int main(){
    int n;
    cin>>n;
   vector<vector<int>>ans;
   ans = pascaltriangle(n);  //Calling
   for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
    }