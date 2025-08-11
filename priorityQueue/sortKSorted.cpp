#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[] = { 10,20,-4,6,18,24,105,10,118};
    priority_queue<int , vector<int>, greater<int>> pq;
    vector<int> ans;
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" "; 
    }
    return 0;
}