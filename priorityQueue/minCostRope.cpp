#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {2,7,4,1,8};
    priority_queue<int, vector<int>, greater<int>>pq;
    int cost = 0;
    for(int ele : arr){
        pq.push(ele);
    }
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        int sum = x+y;
        cost += sum;
        pq.push(sum);
    }
    cout<<cost;
    return 0;
}