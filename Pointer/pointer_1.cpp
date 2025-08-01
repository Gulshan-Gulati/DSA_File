#include<iostream>
using namespace std;
int main(){
    int x;
    int y = 9;
    cout<<&x<<endl;  //address of x printed
    cout<< &y<<endl;    //address
    int z = 8;
    int *p = &z;
    cout<<&z<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    *p = 6;
    cout<<*p<<endl;
}