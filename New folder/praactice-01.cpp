#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,9,7,5,3,2,8};
    int  x=10;
    int triplets=0;
    for(int i=0; i<8; i++){
    for(int j=i+1; j<8; j++){
    for(int k=j+1; k<8; k++){
         if(arr[i]+arr[j]+arr[k]==x){
           triplets++;
    }
        }
        // if(arr[i]+arr[j]==x){
        //    pair++;
        // }
    }
    }
    cout<<triplets<<endl;
    return 0;
    }