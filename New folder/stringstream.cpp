#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string str="gulshan     is   a student";
  stringstream ss(str);
  string temp;

  while(ss>>temp){
    cout<<temp<<" ";

  }
}
