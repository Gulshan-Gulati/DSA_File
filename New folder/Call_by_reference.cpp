#include<iostream>
using  namespace std;
void changevalue(int &x){  //call by reference...
x=100;
}
    int main(){
    int a=5;
    changevalue(a);
    cout<<a;
    return 0;
}