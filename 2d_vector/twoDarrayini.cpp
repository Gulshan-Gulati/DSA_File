#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector< vector<int> > v(3,vector<int> (4,2));
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<v.size()<<endl;
  cout<<v[0].size()<<endl; //no. of column show
  cout<<v[2].size()<<endl; //same answer will give ...no. of column..!!

}