#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int longestSubstr(string s){
    int n = s.size();
    int res = 0;
    for(int  i = 0; i<n; i++){
        vector<int> visited(256,false);
        for(int j = i; j<n; j++){
            if(visited[s[j]] == true)
                break;
            else{
            res = max(res,j-i+1);
            visited[s[j]] = true;
            }
        }
    }
    return res;
}
int main(){
    string s = "GEEKSFORGEEKS]";
    cout<<longestSubstr(s);
    return 0;
}