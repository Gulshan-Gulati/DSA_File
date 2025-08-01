#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,4,10,8,6,5};
    int lar=0;
    int slar=0;
    int index=-1;
    for(int i=0; i<7; i++){
        if(arr[i]>=lar){
           lar=arr[i];
           index=i;
            }
    }
  //  int larelement=arr[index];
  //  larelement=-1;
  //  for(int i=0;i<7;i++){
  // if(arr[i]>=larelement){
  //   larelement=arr[i];
  // }
  //  }
    cout<<index<<endl;
    cout<<lar<<endl;
    return 0;
}