#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,1,7,8,9};
    int *ptr = arr;
    for(int i=0; i<5; i++){
        cout<<i[arr]<<" ";
    }
    cout<<endl;
    *ptr = 9;
    cout<<ptr[0]<<endl;
}