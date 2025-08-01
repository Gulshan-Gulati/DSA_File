#include<iostream>
using namespace std;
int main(){
    int x=20;
    int* y=&x;
    cout<<*y<<"\n"<<y<<endl;
    float z=7.8;
    float* ptr=&z;
    cout<<*ptr<<endl;
     x=30;
    int* m=&x;

    cout<<m<<" "<<&m;
}