#include<iostream>
#include<string>
using namespace std;
int main(){
  string str = "00123456";  //for not long data..! !
  int x = stoi(str);
  cout<<x;
  cout<<endl;

  string ltr = "12345678910289";  //for long data..!!
  long long xy = stoll(ltr);
  cout<<xy;
}