#include<iostream>
using namespace std;
int main(){
    int array[]={3,5,4,8,9,6,20};
    int n=7;
    int k=2;
    k=k%n;
    int ansarray[7];
    int j=0;
    for(int i=n-k; i<n; i++){
            ansarray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        ansarray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}