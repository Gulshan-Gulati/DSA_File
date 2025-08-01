#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s= "leetcode";
    vector<int> arr(26,0);
    int max=0;
    for(int i=0; i<s.length(); i++){
        
            char ch=s[i];
            int ascii=(int)ch;
            arr[ascii-97]++;
                
    }
    for(int i=0; i<s.length(); i++){
    if(arr[i]>max){
        max=arr[i];
      }
    }
    for(int i=0; i<s.length(); i++){
    if(arr[i]==max){
        max=arr[i];
      }
    }
    cout<<max;
  
}