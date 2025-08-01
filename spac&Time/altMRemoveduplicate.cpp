#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,1,3,4,5,1,2,9,2};
    int n=arr.size();
    vector<int> ans(n,0);
    for(int i=0; i<n; i++){
        if(ans[i]==0){
            ans.push_back(1);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
