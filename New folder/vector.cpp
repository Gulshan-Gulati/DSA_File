#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>vrr={2,3,4,5,6};

    // vrr.push_back(1);
    // vrr.push_back(2);
    // vrr.push_back(3);
    // vrr.push_back(4);
    // vrr.push_back(5);
    int k=2;
    k=k%vrr.size();

    reverse(vrr.begin(),vrr.end());
    reverse(vrr.begin(),vrr.begin()+k);
    reverse(vrr.begin()+k,vrr.end());
    for(int i=0; i<vrr.size(); i++){
        cout<<vrr[i];
    }
}