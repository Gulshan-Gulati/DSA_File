#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s="physicswallah";
   string t="wallphyahsics";
   sort(t.begin(),t.end());
   sort(s.begin(),s.end());
cout<<s<<endl;
cout<<t<<endl;
   if(s==t){
   cout<<true;
   }else{
    cout<<false;
   }
}