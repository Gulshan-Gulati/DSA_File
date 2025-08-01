#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > PascleTriangle(int n){
    vector<vector<int>> pascal(n);
    for(int i=0; i<n; i++){
        pascal[i];
        pascal.resize(i+1); 
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }else{
  pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1]; 
            }
        }
    }
    return pascal;
}
int main(){
  int n;
  cout<<"Enter n :"<<endl;
cin>>n;
vector<vector<int> > ans;
ans = PascleTriangle(n);
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}
return 0;
}