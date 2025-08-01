#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,56,43};
    int* ptr=&arr[0];

    cout<<(*ptr)++<<endl;
    // cout<<(*ptr)++<<endl;
    cout<<*ptr++<<endl;
    cout<<(*ptr)++<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0];

}