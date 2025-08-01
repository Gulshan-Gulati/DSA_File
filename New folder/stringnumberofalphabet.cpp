#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="heljjjjjjjloji";
   
    int n=s.length();
    int max =0;
    for(int i=0; i<n; i++){
        char ch=s[i];
         int count=1;

        for(int j=i+1; j<n; j++){
            if(s[i]==s[j])
                count++;
            }if(max<count)
            max =count;
        }
    cout<<max;
}