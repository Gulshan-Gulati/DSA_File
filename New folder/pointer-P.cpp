#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,2,4,1,9};
    int* ptr=arr;
    // for(int i=0; i<6; i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }cout<<endl;
          ptr[3]=5;
      *ptr=6;
    cout<<ptr<<endl;
     cout<<*ptr<<endl;
     cout<<ptr[0]<<endl;
     for(int i=0; i<6; i++){
        cout<<ptr[i]<<" ";
     }
}