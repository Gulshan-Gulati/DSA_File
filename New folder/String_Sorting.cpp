#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s;
//    cin>>s;
getline(cin,s);
   
   sort(s.begin(),s.end());
   cout<<s<<endl;
   reverse(s.begin(),s.end());
    cout<<s;


}