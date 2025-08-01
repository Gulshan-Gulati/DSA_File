#include<iostream>
#include<vector>
using namespace std;
int leftones(vector<vector<int> > &matrix){
int lefone=INT8_MIN;
int maxonerow=-1;
int j=matrix[0].size()-1;
//for finding leftones in '0' rows;
    while(j>=0 && matrix[0][j]==1){
        lefone=j;
        maxonerow=0;
        j--;
   }
   for(int i=0; i=matrix.size(); i++){
    lefone=j;
    maxonerow=i;
    j--;


   }
   return maxonerow;
}
int maximumOnesRows(vector<vector<int> > &matrix){
int maxOnes=INT8_MIN;
int maxOnesRows=-1;
int column=matrix[0].size();
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==1){
                int numberOfOnes=column-j;
                if(numberOfOnes>maxOnes){
                  maxOnes=numberOfOnes;
                   maxOnesRows=i;
               }      
            }
        }
   }
   return maxOnesRows;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
        }
        int res = maximumOnesRows(matrix);
        int ans = leftones(matrix);
        cout<<ans<<endl;
       cout<<res<<endl;


        return 0;
}