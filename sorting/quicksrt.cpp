#include<iostream>
using namespace std;
int partition(int arr[], int si,int ei){
    int pivotElem = arr[si];
    int count = 0;
    for(int i = si+1; i<=ei; i++){
        if(arr[i]<= pivotElem)
            count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int j = ei;
    int i = si;
    while(i<pivotIdx || j>pivotIdx){
        if(arr[i]<=pivotElem) i++;
        if(arr[j]>pivotElem) j--;
        else if(arr[i]>pivotElem && arr[j]<=pivotElem){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    return pivotIdx;
}
void quicksrt(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    quicksrt(arr,si,pi-1);
    quicksrt(arr,pi+1,ei);
}
int main(){
    int arr[] = {7,4,7,5,6,8,9,3,0,7,9,22,5,4,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    quicksrt(arr,0,n-1);
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}