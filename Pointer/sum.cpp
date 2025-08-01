#include<iostream>
using namespace std;
int main(){
    // int x =20;
    // int y = 200;
    // int *p = &x;
    // int *w = &y;
    // cout<<*p + *w<<endl;

    int x,y;
    int *p = &x;
    int *w = &y;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the vlaue of y : "<<endl;
    cin>>y;
    // cout<<x+y<<endl;
    cout<<*p + *w<<endl;
}