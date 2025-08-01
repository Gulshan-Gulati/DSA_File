#include<iostream>
using namespace std;
int main(){
    string s = "babad";
    int n = s.size();
    int k = 0;
    for(int  i = 0; i<n; i++){
        for(int j = k; j<=i; j++){
            cout<<s[j];
        }
        cout<<endl;
    }
    k++;
}