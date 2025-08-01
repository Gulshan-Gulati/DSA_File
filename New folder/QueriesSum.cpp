#include<iostream>
#include<vector>
using namespace std;
void QueriesSum(vector<int> &v){
int l=2;
int r=4;
int prefix_sum_l=0;
int prefix_sum_r=0;
int ans_sum;
for(int i=0; i<v.size(); i++){
prefix_sum_l+=v[0];
}
for(int i=0; i<v.size(); i++){
prefix_sum_r+=v[3];
}
for(int i=0; i<v.size(); i++){
ans_sum=(prefix_sum_r)-(prefix_sum_l);
}
for(int i=0; i<v.size(); i++){
cout<<ans_sum<<" ";

}
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){

        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    QueriesSum(v);
return 0;
}