#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
int size=s.size();
for(int i=0; i<size; i++){
    if(size==1){
        break;
    }
    if(size==2 && s[0]!=s[1]){
        count=1;
       break;
    }
   else if(i==0){
        if(s[i]!=s[i+1])
        count++;
    }
    else if(i==size-1){
        if(s[i]!=s[i-1])
        count++;
    }
    else if(s[i]!=s[i+1] && s[i]!=s[i-1])
        count++;
}
 cout<<count<<" ";
return 0;
}