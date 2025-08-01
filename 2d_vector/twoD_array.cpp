#include<iostream>
using namespace std;
void change(int arr[]){    //one D array need not necessary to deceler the the size in array..!!
    arr[0] = 88;
}
void twoDchange(int a[3][3]){  //here i have to decelar the size of 2d array....but in vector not necessary..!!
    a[0][0] = 92;
}
int main(){
    int arr[] = {1,3,2,7,8};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;

    int a[3][3] = {{1,2,3},{4,5,6},{88,78,97}};
    cout<<a[0][0]<<endl;
    twoDchange(a);
    cout<<a[0][0]<<endl;
}