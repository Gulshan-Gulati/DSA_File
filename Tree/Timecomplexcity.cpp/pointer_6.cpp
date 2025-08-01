#include<iostream>
using namespace std;
int main(){
    int arr[3]={3,5,2};
    int (*p)[3]=&arr;
    cout<<p<<" "<<*p<<" "<<*arr<<" "<<arr<<endl;
}