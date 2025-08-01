#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str = "gulati";
    vector<int> s(26,0);
    int max = 0;
    for(int i=0; i<str.size(); i++){
        int un = s[i];
        int ascii = (int)un;
        str[ascii - 97]++;
    }
    for(int i=0; i<str.size(); i++){
        if(str[i]>=max){
            max = str[i];
        }
    }
        cout<<max;
}