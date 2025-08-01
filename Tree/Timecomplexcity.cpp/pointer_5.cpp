#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,4,6};
    int* ptr=&arr[0];
    // cout<<*ptr<<endl;
    // cout<<*++ptr<<endl;
    // cout<<arr[0];
    // cout<<++*ptr<<endl;
    // cout<<arr[0]<<" "<<arr[1]<<endl;
    // cout<<arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*(arr+1)<<endl;

}