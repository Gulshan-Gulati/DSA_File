#include<iostream>

using namespace std;
int main(){
    int arr[]={4,4,3,5,7,5,7};
    int unique;
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]!=arr[j]){
                unique=arr[i];
            }else{
                unique=0;
            }
        }
    }
    cout<<unique<<endl;
    return 0;
}