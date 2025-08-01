#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string str[]={"00123,0342,00034,0353,000435,2901"};
   int max = stoi(str[0]);
   string maxS =str[0];
   for(int i=1; i<5; i++){
    int x = stoi(str[i]);
    if(x>max){
        max=x;
    maxS = str[i];
    }
   }
   cout<<maxS;
   return 0;

}