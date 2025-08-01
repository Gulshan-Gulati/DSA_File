#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *p = &x;
    int c = (*p)++;
    cout<<c<<endl;
    int b = ++(*p);
    cout<<b<<endl;
   
}
