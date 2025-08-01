#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // a[i]++;
            // b[j]++;
            a.push_back(10);
            b.push_back(5);
        }
    }
    return 0;
}