#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="physicswallah";
    string ptr="wallahphysisc";

   sort(str.begin(), str.end());
   sort(ptr.begin(), ptr.end());
   if(str==ptr)
   cout<<true;
   else cout<<false;
}