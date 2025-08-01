#include<iostream>
using namespace std;
int main(){
    float f=10.2;
    int x= 10;
    void* ptr=&f;
    ptr = &x;
    int *integ=(int *)ptr;
    cout<<ptr<<" "<<&f<<endl;
    cout<<*integ;
}